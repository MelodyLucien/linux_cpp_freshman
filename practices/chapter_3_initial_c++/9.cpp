#include<iostream>
using namespace std;
class Salesman{
 public :
   Salesman(int num,int quantity,float price);
   static void add2Sum(Salesman &s);
   void displayCurrentMoney();
   static float sum_price;
 private :
  int num;
  int quantity;
  float price;
  static int sum_count;
};

int Salesman::sum_count=0;
float Salesman::sum_price=0.0;

Salesman::Salesman(int num,int quantity,float price):num(num),quantity(quantity),price(price){}

void Salesman::add2Sum(Salesman &s){
  sum_count+=s.quantity;
  sum_price+=s.quantity*s.price;
}

void Salesman::displayCurrentMoney(){
   cout<<"sum average price is : "<<sum_price/sum_count<<endl;
   cout<<"sum count is : "<<sum_count<<endl;
}

int main(){
   Salesman sals[3]={Salesman(1,1,3.0),Salesman(2,3,3.0),Salesman(3,3,3.0)};
   for(int i =0;i<3;i++){
      Salesman::add2Sum(sals[i]);
   }
   //Salesman::sum_count; ERROR IS PRIVATE
   sals[0].displayCurrentMoney();
   return 0;
}
