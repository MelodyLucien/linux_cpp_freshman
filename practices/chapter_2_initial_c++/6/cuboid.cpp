#include<iostream>
#include"cuboid.h"
using namespace std;
void Cuboid::set_value(){
  cin>>Cuboid::length;
  cin>>Cuboid::width;
  cin>>Cuboid::height;
}
void Cuboid::show_volume(){
 cout<<"the vloume of the cuboid is "<<Cuboid::volume<<endl;
}
void Cuboid::compute_volume(){
   Cuboid::volume=Cuboid::length*Cuboid::width*Cuboid::height;
}
