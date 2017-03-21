#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
 vector<string> names;
 names.push_back("zhouhao2");

 names.push_back("zhouhao21");
  
 names.push_back("zhouhao22");
   
 names.push_back("zhouhao23");

 for(int i =0;i< names.size();i++){
  cout<<names[i]<<endl;
 }


 return 0;
}
