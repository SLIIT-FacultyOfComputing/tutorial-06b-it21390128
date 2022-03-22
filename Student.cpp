#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and na
void Student::assignDetails(int sId, char sname[]){
  studentId = sId;
  strcpy(name, sname);
}

// Display StudentId and Name
void Student::display()
{
  cout<<"Student ID: "<<sId<<endl;
  cout<<"Student name: "<<sname<<endl;
}