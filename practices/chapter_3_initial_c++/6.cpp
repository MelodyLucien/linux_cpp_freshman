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

int main(){
 Student stud(101,87.6);
 stud.display();
 stud.change(102,90.8);
 stud.display();
return 0;
}

