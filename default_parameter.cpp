#include<iostream>
using namespace std;
int max(int x,int y=10);
int main(){
   cout<<"hello world"<<endl;
   int x=3,y=5;
   int r=max(3,5);
   cout<<"the max is ="<<r<<endl;
   int s=max(3);
   cout<<"the max is ="<<s<<endl;
   return 0;
}

int max(int x,int y){

  if (x>=y)return x;
  else return y;

}
