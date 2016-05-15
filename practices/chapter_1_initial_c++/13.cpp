#include<iostream>
using namespace std;
#define MAX 10
void swap(float &a,float &b){
   float temp;
   if(a>b){
     temp=a;
     a=b;
     b=temp;
   }else{
      ;
   }
}


void sort(float (&a)[MAX]){
   for(int i=0;i<5-1;i++){
    for(int j=i;j<=5-1;j++){
       swap(a[i],a[j]);
      }
    }
}

void sort(int (&a)[MAX]){



}

void sort(double ($a)[MAX]){



}
int main(){
  float a[MAX];
  for(int i=0;i<MAX;i++){
   cin>>a[i];
  }
  sort(a);
  for(int i=0;i<MAX;i++){
    cout<<a[i]<<" ";
  }
  return 0;
}
