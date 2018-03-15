#include <iostream>
#include "stack.h"
using namespace std;

stack::stack(){
    topElem = -1;
    cout <<"Initilize stack...\n";
}

stack::~stack(){
	cout <<"\nDestructor...\n";
    //NO ACTION
}

bool stack::isEmpty(){
  if(topElem == -1){
    cout<<"Stack is empty\n";
 	 return true;
 	}
 	else
 		return false;
}

bool stack::isFull(){
	if(topElem == MAX-1){
		cout<<"Stack is empty\n";
 	 	return true;
 	}
 	else
 		return false;
 }

void stack::display(){
	if(isEmpty())
		cout<<"Stack underflow\n";
	else{
		cout<<"Display: ";
		for(int index = topElem; index >= 0; index--){
			cout << el[index] << "\t" ;
		}
	}
}

void stack::push(el_t x){
 	if(isFull()){
 		cout <<"Stack Overflow\n";
 	}
 	else{
 		cout <<"Pushing\n";
 		topElem++;
 		el[topElem] = x;
 	}
 }

