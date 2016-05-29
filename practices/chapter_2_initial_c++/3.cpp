#include<iostream>
using namespace std;
class Time{
private :
int hour;
int minute;
int sec;
public :
 void set_time();
 void show_time();
};

int main(){
 Time t;
 t.set_time();
 t.show_time();
 return 0;
}

 void Time::set_time(){
   cin >> hour;
   cin >> minute;
   cin >> sec;
  }

  void Time::show_time(){
    cout<<Time::hour<<":"<<Time::minute<<":"<<Time::sec<<endl;
  }
