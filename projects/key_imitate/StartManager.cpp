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
	mInputDispatcher->start();
}


void StartManager::stop(){
   cout <<"stop()" << endl;
}


void StartManager::init(){
	mInputReader = new InputReader();
	mInputDispatcher = new InputDispatcher();
   cout <<"init()" << endl;
}

