#include<iostream>
#include<string.h>
#include<stdio.h>
#include "InputEventLabels.h"

using namespace std;

int main(){
 
  cout<< __cplusplus << endl;

  for (int i = 0; i < 13; ++i)
  {
       cout<<KEYCODES[i].literal<<"    :     "<<KEYCODES[i].value<<endl;
  }

  printf("%s",45);
}
