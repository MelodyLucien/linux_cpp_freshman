#include <string>
#include <iostream>
using namespace std;
void replace( string str){
  cout<<str<<endl;
  cout<<str.find_first_of('\n')<<endl;
  cout<<str.find_first_of('\r')<<endl;
  
}

int main(){  
   replace("hello lydia\n");
   return 0;
}





