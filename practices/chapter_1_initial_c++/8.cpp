#include<iostream>
using namespace std;
int sort(int &x,int &y){
    if(x<y){
    cout<<x<<" "<<y<<endl;
    }else{
    cout<<y<<" "<<x<<endl;
    }
    return 0;
}

int main(){
   int a,b;
   cout<<"input two number"<<endl;
   cin>>a>>b;
   sort(a,b);
   return 0;
}
