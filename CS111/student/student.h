//*heading file for student.C*
#ifdef STUDENT_H			/*Defining header file*/
#define STUDENT_H
#include <iostream>
#include <studio.h>
#include <stdlib.h>
#include <string>
using namespace std;

/*-CREATING A STRUCTURE-*/
struct student{
  int id
  string name;
  char gender;
  string major;
  int age;
};

/*PROTOYPE FUNCTIONS*/
void idInput(student list[]);
char ckGender(char g);


/*ARRAY CONSTANT*/
const X=2;

/*Gets user input and puts in a list array*/
void idInput(student list[]){
  int i=0;
  char ans;
  cout<<"Enter student info[Y/N]: ";
  bool escape=false; 
  while(escape==false){
    cin>>ans;
    if(ans == 'Y' || ans == 'y' || ans == 'yes')
      escape true;
    else if(ans == 'N' || ans == 'n')
      escape ture;
    else 
      cout<<"ERROR. Invaild respons try again!\n";
  }
}
escape = false;

/*Student information*/
while ((ans=='Y'||ans=='Y')&&i<X){
  cout<<""<<"\n";
  cout<<"Enter ID:";
  cin>>list[i].id;
  cout<<"Enter Name:";
  cin>>list[i].name;
  cout<<"Gender:";
  char cg;
  list[i].gender=checkGender(cg);

  cout<<"Enter Major:";
  cin>>list[i].major;
  cout<<"Enter age:";
  cin>>list[i].age;
  i++;
  
  cout<<"Enter another student[Y/N]:";
 
}

char ckGender(char g){
  bool exit = false;
  exit = true;

  if(g =='F || g == 'f')
    exit = true;
  if(g =='M || g == 'm')
    exit = true;
}
  

