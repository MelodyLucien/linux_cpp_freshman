#include<iostream>
#include "student.h"
#include<string>
using namespace std;
void Student::display(){
  cout<<"num is "<<num<<endl;
  cout<<"name is "<<name<<endl;
  cout<<"sex is "<<sex<<endl;
}

void Student::set_value(int num,string name ,char sex){
  Student::num=num;
  Student::name =name;
  Student::sex=sex;
}
