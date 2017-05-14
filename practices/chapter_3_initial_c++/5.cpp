#include<iostream>
using namespace std;
class Student{
public :
 Student(int ,int );
 void introduce();
 int getScore();

private:
  int number;
  int score;
};

Student::Student(int m, int s):number(m),score(s){}

int Student::getScore(){
   return score;
}

void Student::introduce(){
   cout<<"my number is  "<<number<<" my score is "<<score<<endl;
}

Student * max(Student *s,int length){
    int i,j;
    for(i = 0;i<length-1;i++){
       for(j= i+1;j<=length-1;j++){
           if(s[i].getScore() < s[j].getScore()){
             Student temp = s[i];
             s[i]=s[j];
             s[j]=temp;
           }
       }
    }
    return &s[0];
}

int main(){
   Student stu[5]={Student(1,60),Student(2,70),Student(3,80),Student(4,90),Student(5,100)};
   Student * p=max(stu,5);
   p->introduce();
   return 0;
}


