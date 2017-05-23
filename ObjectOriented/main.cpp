#include <iostream>
#include "Student.h"

using namespace std;

int main(){
    Student t(5,6);//notice compile error
    t.introduce();
    cout<<"hello world!!\n";
	return 0;
}
