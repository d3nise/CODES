/*
  =========================================================
  PROGRAM  -- Calualate miles per hour

  C0DER    -- Denise Thuy Vy Nguyen =^.,.^=
  COMPLIER -- UNIX 
  FILE TYPE-- mph.C main.cpp client file (no .h/.cpp)
  Madj -- CS111 CSUSM, Fall 2015 
  ===========================================================
*/
#include <iostream>
using namespace std;

int main(){
  const double meters = 1609;         // Declaring const variables 
  double mph, mps;


  cout << endl;
  cout <<"----This program will calulate the miles per hour from user input----" <<endl;
  cout << " " << endl;

  
  cout << "☆.。.:*・°☆.。.:*・°☆.。.:*・°☆.。.:*・°☆" << endl;
  cout << "Enter MPH: ";
  cin >> mph;

  mps = (mph*meters)/(3600);
  cout << "\nMPS:" << mps << "\n";
  return 0;
}
