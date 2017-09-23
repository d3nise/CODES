/*
  LAB1 open read close file 
  SCRIPT.KITTIE
*/
#include <sys/types.h> 	/*Functions use file descriptors to reference files or devices.*/
#include <sys/stat.h> 	/*Functions take a struct stat buffer argument, which is used to return the file attributes.*/
#include <fcntl.h> 		/*Defines the following requests and arguments for use by the functions fcntl() and open()*/
#include <string.h> 	/*Defines several functions to manipulate C strings and arrays.*/
//#include <errno.h>		/*Defines a list of macros indicating different error codes, which will expand to integer constant expressions with type int.*/
#include <unistd.h>		/*Header defines miscellaneous symbolic constants and types, and declares miscellaneous functions. The contents of this header are shown below.*/
#include <stdio.h>		/*Standard input output header.*/

int main(int argc, char*argv[]){
	char buf[256]; //Declaring buffer to read files.

	if(argc!=3){
		printf("ERROR!\n./filecpy <input file> <output file>\n");
		return 1;
	}

	int input_fd = open(argv[1],O_RDONLY);	//Call to read function

	if(input_fd==-1){
		printf("ERROR: Opening file for reading.\n");
		//puts(sterror(errno));				//Function call for error handeling 
		return 1;	
	}

	int output_fd = open(argv[2],O_CREAT | O_WRONLY | O_EXCL, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
		if(output_fd == -1){
		printf("ERROR: Creating file for writing.\n");
		return 1;
	}
		//puts(strerror(errno));

	 // ssize_t read(int fd, void *buf, size_t count);
  	 // creates and infinite loop to read 256 bytes
	for(;;){
		ssize_t bytes_read = read(input_fd, buf, 256);
		if(bytes_read == -1){
		printf("ERROR: Wrtting to file.\n");
		//puts(strerror(errno));
		return 1;
		}
		if(bytes_read ==0){
			break;		//End of file breaks out of loop 
		}

		ssize_t bytes_write = write(output_fd, buf, bytes_read);
		if(bytes_write == -1){
		printf("ERROR: Writting to file.\n");
		//puts(strerror(errno));
		return 1;
		}
	}

	int x = close(input_fd);
	if(x == -1){
		printf("ERROR: Closing file input.\n");
		//puts(strerror(errno));
	}

	int y = close(output_fd);
	if(y == -1){
		printf("ERROR: Cloing output file.");
		//puts(strerror(errno));
	}
	return 0;
}
