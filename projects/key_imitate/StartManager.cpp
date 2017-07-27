#include "StartManager.h"
#include <iostream>
using namespace std;

StartManager::StartManager(void){
   cout <<"construct()" << endl;
}

StartManager::~StartManager(void){
   cout <<"deconstruct()" << endl;
}

void StartManager::start(){
	cout <<"start()" << endl;
	mInputReader->start();
}


void StartManager::stop(){
   cout <<"stop()" << endl;
}


void StartManager::init(){
    mInputReader = new InputReader();
   cout <<"init()" << endl;
}

