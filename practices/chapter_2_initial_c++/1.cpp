#include<iostream>
using namespace std;

class Time{
  public :
    void set_time(void);
    void show_time(void);
  private:
  int hour;
  int minute;
  int sec;
};
Time t;
int main(){
 t.set_time();
 t.show_time();
  return 0;
}

void Time::set_time(){
   cin >> hour;
   cin >> minute;
   cin >> sec;
  return;
}
void Time::show_time(){
   cout<<Time::hour<<":"<<Time::minute<<":"<<Time::sec<<endl;
   return;
}
