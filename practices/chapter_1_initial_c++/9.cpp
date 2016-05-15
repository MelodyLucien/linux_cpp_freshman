#include<iostream>
using namespace std;
int sort(int &x,int &y,int &z){
    int a[3]={0,0,0};
    a[0]=x;
    a[1]=y;
    a[2]=z;
    for(int i=0;i<2;i++){
    for(int j=0;j<2-i;j++){
      if(a[j]>a[j+1]){
      int temp = a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
      }
    }
    }
    cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    return 0;
}

int main(){
  int a,b,c;
  cout<<"please input 3 numbers"<<endl;
  cin>>a>>b>>c;
  sort(a,b,c);
}
