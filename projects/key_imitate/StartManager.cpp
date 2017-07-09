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
}


void StartManager::stop(){
   cout <<"stop()" << endl;
}


void StartManager::init(){
   cout <<"init()" << endl;
}

