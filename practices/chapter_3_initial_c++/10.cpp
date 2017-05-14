#include<iostream>
using namespace std;
class Date;
class Time
{
  public:
   Time(int,int ,int);
   friend void display(Time &,Date &);
  private:
   int hour;
   int minute;
   int sec;
};

class Date{
  public :
    Date(int,int ,int);
    friend void display(Time &,Date &);
  private:
    int month;
    int day;
    int year;
};

Time::Time(int h,int m,int s):hour(h),minute(m),sec(s){}

Date::Date(int m,int d,int y):month(m),day(d),year(y){}

void display(Time &t,Date &d){
  cout<<"hour:minute:sec "<< t.hour<<":"<<t.minute<<":"<<t.sec<<endl;
  cout<<"month:day:year "<<d.month<<":"<<d.day<<":"<<d.year<<endl;
}
int main(){
   Time t(3,4,5);
   Date d(6,7,8);
   display(t,d);
   return 0;
}
