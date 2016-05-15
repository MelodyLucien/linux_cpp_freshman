#include<iostream>
#include<string>
using namespace std;
void swap(string &s1,string &s2){
    string temp;
    if(s1>s2){
      temp=s1;
      s1=s2;
      s2=temp;
    }else{
      ;
    }
}

void swap1(string s1,string s2){
  cout<<s1<<endl;
  cout<<s2<<endl;
}

int main(){
   string s[5];
   //get 5 string \r\n
   for(int i=0;i<5;i++){
    getline(cin,s[i]);
   }
   cout<<"in line"<<endl;
   //select sort method
   for(int i=0;i<5-1;i++){
     for(int j=i;j<=5-1;j++){
        swap(s[i],s[j]);
     }
   }
   for(int k=0;k<5;k++){
     cout<<s[k]<<endl;
   }
   return 0;
}
