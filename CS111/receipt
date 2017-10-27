/*
	CS 111
	DENISE NGUYEN =^.,.^=
*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
	string name; 
	string date; 
	string item;
	double itemPrice;

	cout <<"\n Sales associate name: ";			/*NAME*/
	getline(cin,name); 
	cout <<"\n";					/*Get name input*/	
	cout <<"DATE: ";
	getline(cin,date); 
	cout <<"ITEM: ";
	cin >> item;
	cout<<"Item price: $";
	cin >> itemPrice;
	cout <<"------------------------------\n";		/*DISPLAY LINE*/

	cout <<"MEOW STORE =^.,.^=\n";
	cout << setw(30) << date << "\n";
	cout << setw(30) << name << "\n";

	double salestax = itemPrice*0.075;
	double total = salestax+itemPrice;

	cout<<left<< setw(20)<< "Item" <<setw(2)<<"$";
	cout<<right<< setw(5)<<setprecision(2)<< fixed<<itemPrice <<"\n";
	cout<<left<< setw(20)<< "Salestax:" <<setw(2)<<"$";
	cout<<right<< setw(5)<<setprecision(2)<< fixed << salestax <<"\n";
	cout<<left<< setw(20)<< "Total:" <<setw(2)<<"$"; 
	cout << setw(2) << total << "\n";




	return 0;
}


