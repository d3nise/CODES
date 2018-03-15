/*
	stack.h
	Denise Thuy Vy Nguyen =^.,.^=
	Program: 
	1.) Evaluating Postfix Expressions

*/
#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;

const int MAX=10;		//Declares a const max size of 10 
typedef char el_t;		//Denotes element type

class stack{
	//Private datamembers
	private: 
		el_t el[MAX];		//element is an array with slots MAX -1
		int topElem;		//The index to the top element
		void FuctionErr(string);
	//Public prototypes datamembers
	public:
		stack();			//Constructor creates an object and initlize it
		~stack();			//Destructor to destroy and object
		void display();
		bool isEmpty();
		bool isFull();
		void push(el_t);	//Push an element 

};
#endif


/*
================================================================================
Run Time Stack of Activation Records 
• A run-time stack is used to hold Activation Records of function calls.
An Activation record contains essential information about the function call, 
such as parameter values, local variables, and also the return address (where 
to go back to when we return from the function call).
================================================================================
*/