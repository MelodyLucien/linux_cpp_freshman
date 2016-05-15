#include<iostream>
using namespace std;

int max(int x,int y,int z=10){
   int temp=-1;
   if(x<y){
     temp=x;
   }
   if(temp<z){
    temp=z;
   }
   return z;
}
int main(){
    int temp;
    temp=max(2,8);
    cout<<"first max is "<<temp<<endl;
    temp=max(2,5,9);
    cout<<"second max is "<<temp<<endl;

    return 0;
}


