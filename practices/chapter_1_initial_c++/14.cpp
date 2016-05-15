#include<iostream>
using namespace std;
#define MAX 10
template <typename T>
void swap2(T &a,T &b){
   T temp;
   if(a>b){
     temp=a;
     a=b;
     b=temp;
   }else{
      ;
   }
}

template <typename T>
void sort(T (&a)[MAX]){
   for(int i=0;i<MAX-1;i++){
    for(int j=i;j<=MAX-1;j++){
       swap2(a[i],a[j]);
      }
    }
}

int main(){
  int a[MAX];
  for(int i=0;i<MAX;i++){
   cin>>a[i];
  }
  sort(a);
  for(int i=0;i<MAX;i++){
    cout<<a[i]<<" ";
  }
  return 0;
}
