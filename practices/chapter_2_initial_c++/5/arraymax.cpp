#include<iostream>
#include"arraymax.h"
using namespace std;
void Array_max::set_value(){
 int i;
 for(i=0;i<10;i++){
   cin>>Array_max::array[i];
 }
}

void Array_max::max_value(){
 int i;
 max=Array_max::array[0];
 for(i=0;i<10;i++){
 if(max<Array_max::array[i])
    max=Array_max::array[i];
 }
}

void Array_max::show_value(){
 cout<<"max value is "<<Array_max::max<<endl;
}
