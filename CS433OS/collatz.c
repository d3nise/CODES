#include <sys/types.h>  //Header tpyes
#include <unistd.h> //Miscellaneous symbolic constants and types
#include <string.h>  //String input and output file
#include <stdio.h> //Std input output file     
#include <fcntl.h>  //Request and agurments fcntl.h and open()
#include <errno.h>  //std error 
#include <stdlib.h>  //Defines ‎Atoi() · ‎Malloc() · ‎Calloc() · ‎Qsort()
#include <sys/wait.h> //Define waitpid(): 
#include <stdio.h> //Std input/output header

int main(int argc, char*argv[]){
  char buffer[256]; //Declaring buffer to read files
  
  if(argc!=3){
    printf("ERROR: Opening files to read! \n"); //print error
    //    puts(sterror(errrno));
  }


}


/*
  =============================================================
    ASSIGNMENT#2: collatz
      PROGRAMMER: Denise Nguyen =^._.^=
      COMPILER: gcc/g++ compiler
      FILE TYPE: collatz.c file
      PROGRAM:fork() system call that generates this sequence 
        in the child process. The starting number will be provided
       from the command line, and perform the Collatz Implementation.
      TEST:
      8, 4, 2, 1
	35, 106, 53, 160, 80, 40, 20, 10, 5, 16, 8, 4, 2, 1
  =============================================================                          
*/
