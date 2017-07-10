#include "InputDispatcher.h"
#include <iostream>
using namespace std;

InputDispatcher::InputDispatcher(void){
   cout <<"InputDispatcher construct()" << endl;
}

InputDispatcher::~InputDispatcher(void){
   cout <<"InputDispatcher deconstruct()" << endl;
}

void InputDispatcher::loop(){
   	cout<<"InputDispatcher: "<<"i am looping "<<endl;
}
void InputDispatcher::start(){
   	cout<<"InputDispatcher: "<<"start "<<endl;
}
