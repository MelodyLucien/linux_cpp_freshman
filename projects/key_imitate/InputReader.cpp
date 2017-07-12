#include "InputReader.h"
#include <pthread.h>
#include <iostream>
using namespace std;

InputReader::InputReader(void){
   cout <<"InputReader construct()" << endl;
}

InputReader::~InputReader(void){
   cout <<"InputReader deconstruct()" << endl;
}

void* InputReader::loop(void * args){

   	cout<<"InputReader: "<<"i am looping "<<endl;
}

void InputReader::start(){
	   	cout<<"InputReader: "<<"start "<<endl;
         // 定义线程的 id 变量，多个变量使用数组
         pthread_t t;
        //参数依次是：创建的线程id，线程参数，调用的函数，传入的函数参数
        int ret = pthread_create(&t, NULL,loop,NULL);
        if (ret != 0)
        {
           cout << "pthread_create error: error_code=" << ret << endl;
        }
}


