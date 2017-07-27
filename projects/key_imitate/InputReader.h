#ifndef INPUT_READER
#define INPUT_READER
#include <iostream>
#include <string>
#include "InputReader.h"
#include "InputDispatcher.h"

using namespace std;
class InputReader {

public:
   	static void* loop(void *);
   	static InputDispatcher* mInputDispatcher;
   	void start();
    InputReader(){
    	    cout <<"InputReader construct()" << endl;
    	}
    ~InputReader();
private:
	static void dispatch(string str);
};

#endif