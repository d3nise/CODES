/*
 stack.c
 DENISE THUY VY NGUYEN =^.,.^=
 */
#include <iostream>
#include "stack.h"
using namespace std;

int main(){
    stack kittyStack;    //Calling constuctor
    if(!kittyStack.isFull()){
    	cout<<"Meow stack..\n";
    }
    else
  		cout <<"Pushing\n";
    	kittyStack.push('A');
    	kittyStack.push('A');
    	kittyStack.push('A');
    	kittyStack.push('A');
    	kittyStack.push('A');
    	kittyStack.push('A');
    //return -1;

    kittyStack.display();

	//return 0;
};
