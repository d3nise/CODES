#include <iostream>
using namespace std;

int main()
{
  double fahrenheit; 
  cout << "Fahrenheit Degree: ";
  cin >> fahrenheit;

  //calcs
  double celsius = (5.0/9.0)*(fahrenheit - 32);

  cout << "Celsius temp is " << celsius << endl;

  return 0;
}
