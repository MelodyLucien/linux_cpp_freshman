#include<iostream>
#include"cuboid.h"
using namespace std;
int main(){
 Cuboid c[3];
 for(int i=0;i<3;i++){
  c[i].set_value();
  cout<<"i get "<<i<<"cuboid"<<endl;
 }
 for(int i=0;i<3;i++){
  c[i].compute_volume();
  c[i].show_volume();
 }

 return 0;
}
