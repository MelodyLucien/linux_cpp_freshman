#include<iostream>
using namespace std;
class Time;

class Date{
  public :
    Date(int,int ,int);
    friend class Time;
  private:
    int month;
    int day;
    int year;
};

class Time
{
  public:
   Time(int,int ,int);
   void display(Date &);
  private:
   int hour;
   int minute;
   int sec;
};

Time::Time(int h,int m,int s):hour(h),minute(m),sec(s){}

Date::Date(int m,int d,int y):month(m),day(d),year(y){}

void Time::display(Date &d){
  cout<<"hour:minute:sec "<< hour<<":"<<minute<<":"<<sec<<endl;
  cout<<"month:day:year "<<d.month<<":"<<d.day<<":"<<d.year<<endl;
}
int main(){
   Time t(3,4,5);
   Date d(6,7,8);
   t.display(d);
   return 0;
}
