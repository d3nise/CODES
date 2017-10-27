/****************************
Purpose: This header file creates a new atm machine class with two private data fields, balance and ID, and it's associated accessor and mutator functions. 

***********************/
class atmMachine
{
 public:
 

  //construct a default atm machine object with default arguments. which would be a person.
  atmMachine();

  //Construct an atmmachine object.
  atmMachine(int);

  //functions to return the balance as it is, and to add or subtract money from it.

  double deposit(double);
  double withdraw(double);
  double getBalance();
  int choice;


 private:
  //the properties of this class
  double balance;
  int id;

};


