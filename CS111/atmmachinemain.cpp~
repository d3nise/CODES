
/***************************
Purpose: To create an atm machine class that has a menu display that gives the user the option to check their balance, withdraw money, deposit money, or leave.

Implemented By: Toby Curtis

Date: 12/4/09

User Information: The user enters their id number, which in this case is irrelevant, and then a menu comes up with the options to either check balance, deposit money, withdraw money, or leave the atm program. To check balance, input 1. To deposit money, input 2, and then when prompted, enter the amount to deposit. To withdraw, input 3, and when prompted, enter the amount of money to withdraw. To exit, input 4. 

********************************/


#include <iostream>
#include "atmmachine.h"
using namespace std;


//prototype
void menu(atmMachine& atmObject);


int main()
{
  //declare the no arg constructor, and an atm object which initializes an account of id 111.
  atmMachine atm1;
  atmMachine atm2(111);

  //Purely visual ask for an id. This was in the example output in the book, so I put it here to just match the output. It has no effect on the purpose of the program.
  int fakeId;
  cout << "Enter an ID to continue... " << endl;
  cin >> fakeId;
  //call the function to print the menu
  menu(atm2);

 
  return 0;
}

//menu fcuntion
void menu(atmMachine& atmObject)
{
 int choice;
 //loop to control the display of the menu. if the user enters 4, the loop will finish and the program will end. 
do
  {
	  
    //newBalance is a placeholder to add or subtract on a balance that is being supplemented or withdrew from.
   double newBalance;


    cout << "Main Menu\n"
	 << "1: Check Balance\n"
	 << "2: Deposit\n"
	 << "3: Withdraw Funds\n"
	 << "4: Exit\n";


    cin >> choice;
    //if statements that handle the menu choices.
    if (choice == 1)
      {
			cout << "The balance is " << atmObject.getBalance() << "." << endl;
		
      }
    if (choice == 2)
      {
			cout << "How much do you want to deposit?" << endl;
			cin >> newBalance;
			atmObject.deposit(newBalance);

      }
    if (choice == 3)
      {
			cout << "How much do you want to withdraw?" << endl;
			cin >> newBalance;
			atmObject.withdraw(newBalance);

      }

  }
 while(choice != 4);
}

