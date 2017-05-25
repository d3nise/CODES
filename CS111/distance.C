/*
  =========================================================
  PROGRAM-- This C++ program will calculate the distance between 
  two points (x1, y1) and (x2, y2)
        >>     sqrt = √square root    

  C0DER-- Denise Thuy Vy Nguyen =^.,.^=
  COMPLIER-- UNIX 
  FILE TYP-- client file (no .h/.cpp)
  Madj -- CS111 CSUSM, Fall 2015 
  ===========================================================
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int x, y, a, b;              //Declaring variables                                    
  double dx, dy, distance;
  
  cout << endl;
  cout <<"----This program will calulate the difference between two points----" <<endl;
  cout << " " << endl;

  //Getting user input for points
  cout << "Enter in x1: ";
  cin >> x;
  cout << "Enter in y1: ";
  cin >> y;
  cout<< "Enter in x2: ";
  cin >> a;
  cout << "Enter in y2: ";
  cin >>b;

  // Math fucntion
  dx = x-a;
  dy = y-b;
  
  distance = sqrt((dx*dx)+(dy*dy));

  cout << "The distance between x2 - x1 is: " << dx << endl;
  cout << "The distance between y2 - y1 is: " << dy << endl;
  cout << "The distance btween the two points is : " << distance << endl;
  return 0;
}
