#include <iostream>
#include "atmmachine.h"
using namespace std;

// Construct a default atmMachine object.
atmMachine::atmMachine(){
  id = 0;
  balance = 0;
}

// Construct a rectangle object.
atmMachine::atmMachine(int newId){
  id = newId;
  balance = 100;
}

// Function to handle deposits.
double atmMachine::deposit(double newBalance){
  if (newBalance > 0)
    balance = balance + newBalance;
  return balance;
}

// Function to handle withdrawals.
double atmMachine::withdraw(double newBalance){
  if (newBalance > 0)
    balance = balance - newBalance;
  return balance;
}

// Function to return the balance since its a private variable.
double atmMachine::getBalance(){
  return balance;
}

/*[T^T][T^T][T^T][T^T][T^T][T^T][T^T][T^T][T^T][T^T][T^T][T^T][T^T][T^T] 
  Purpose: This class creates the atmMachine object.                      
  Using: There are three functions that are defined: getBalance, deposit, 
  and withdraw. It is using no classes.                                 
  used in: No classes are used in this class.                        
#####################################################################*/
