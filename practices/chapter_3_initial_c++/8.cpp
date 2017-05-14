#include<iostream>
using namespace std;
class Student
{
   public :
   Student(int n,float s):num(n),score(s){}
   void change(int n,float s){num=n;score=s;}
   void display(){
       cout<<num<<":"<<score<<endl;
   }

   private:
     int num;
     float score;
};

void fun(Student &s){
   s.change(10,12.9);
   s.display();
}

int main(){
 Student stud(101,87.6);
 fun(stud);
 return 0;
}

