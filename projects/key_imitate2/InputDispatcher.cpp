#include "InputDispatcher.h"
#include <string.h>
#include <iostream>
using namespace std;

InputDispatcher::InputDispatcher(void){
   cout <<"InputDispatcher construct()" << endl;
}

InputDispatcher::~InputDispatcher(void){
   cout <<"InputDispatcher deconstruct()" << endl;
}

void* InputDispatcher::loop(void * args){
   cout<<"InputDispatcher: "<<"i am looping "<<endl;
}

void InputDispatcher::onDispatch(string keycode){
   cout<<"InputDispatcher: "<<"onDispatch"<< keycode <<endl;

   dispatchToApp();
}

void InputDispatcher::dispatchToApp(){
   	cout<<"InputDispatcher: "<<"dispatchToApp "<<endl;
}

void InputDispatcher::start(){
   		cout<<"InputDispatcher: "<<"start "<<endl;
         // 定义线程的 id 变量，多个变量使用数组
        pthread_t t;
        //参数依次是：创建的线程id，线程参数，调用的函数，传入的函数参数
        int ret = pthread_create(&t, NULL,loop,NULL);
        if (ret != 0)
        {
           cout << "pthread_create error: error_code=" << ret << endl;
        }
}
