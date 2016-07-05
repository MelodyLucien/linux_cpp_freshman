#include<iostream>
using namespace std;
class Student{
public :
 Student(int ,int );
 void introduce();

private:
  int number;
  int score;
};

Student::Student(int m, int s):number(m),score(s){}

void Student::introduce(){
   cout<<"my number is  "<<number<<" my score is "<<score<<endl;
}

int main(){
   Student stu[5]={Student(1,60),Student(2,70),Student(3,80),Student(4,90),Student(5,100)};
   Student * p=&stu[0];
   //Student *p =stu; is also right
   for(int i=0;i<5;i++){
     if(((i+1)%2)==1)
     stu[i].introduce();
   }

   p->introduce();

   return 0;
}


