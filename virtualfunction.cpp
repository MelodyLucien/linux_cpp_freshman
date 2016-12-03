#include<iostream>
using namespace std;

class A{
    public:
        virtual void funvirtual() = 0;
};

void A::funvirtual(){
  cout<<"i am good!!\n";
};

class B:public A{
    public :
        void print(){
            funvirtual();
        }
        //implement virtual function otherwise you can`t intialize a Object B b
        void funvirtual(){
           A::funvirtual(); //use father `s function 
        }
};

int main(){

  cout<<"hello world"<<endl;

  B b;
  b.print();

  return 0;
}
