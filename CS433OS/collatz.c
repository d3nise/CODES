#include <sys/types.h>  //Header tpyes
#include <unistd.h>  
#include <string.h>  //String input and output file
#include <stdio.h>     
#include <fcntl.h>
#include <errno.h>  //std error 
#include <stdlib.h>  
#include <sys/wait.h> 
#include <stdio.h>

int main(){


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
