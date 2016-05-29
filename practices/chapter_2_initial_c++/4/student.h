#include<string>
using namespace std;
class Student 
{
  public:
  void display();
  void set_value(int age=1,string name="dsd",char sex='m');
  private:
  int num;
  string name;
  char sex;
};
