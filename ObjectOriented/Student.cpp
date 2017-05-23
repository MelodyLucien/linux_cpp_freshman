#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(){
   cout<<"empty construction invoke"<<endl;
}

Student::Student(int x, int y):number(x),score(y){
}

void Student::introduce(){
   cout<<"my number is  "<<number<<" my score is "<<score<<endl;
}

