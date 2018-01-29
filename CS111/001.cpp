/*======================================================
  DENISE THUY VY NGUYEN
  1/29/17
  PROGRAM: This program will take in user input, print,
  then will print again with user input to multiply. 

======================================================*/
#include <iostream>
using namespace std;

int main(){
  int size; 

  cout << "Enter in an array size: ";
  cin >> size;
  int a[size];

  cout << "--ENTER NUMBERS--\n";
  for (int i = 0; i < size; i++){
    int num; 
    cout << i+1 << ": ";
    cin >> num;
    a[i]=num;
  }
  cout << "----------------------------\n";

  cout << "\n--PRINTING ARRAY--\n";
  for(int i=0; i < size; i++){
      cout << a[i] << "\t";
  }
  cout << "\n----------------------------\n";
  
  int times;
  cout << "\nHow many would you like to\n multiply by: ";
  cin >> times;
  cout << "\n----------------------------\n";

  cout<< "\n--PRINTING ARRAY & *--\n";
  for(int i=0; i<size; i++){
    cout<< a[i]*times << "\t";
  }
  cout << "\n----------------------------\n";
  return 0; 
}