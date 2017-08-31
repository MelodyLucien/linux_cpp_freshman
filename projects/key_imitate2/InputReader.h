#ifndef INPUT_READER
#define INPUT_READER
#include<string>
#include"InputDispatcher.h"

using namespace std;
class InputReader {

public:
   	static void* loop(void *);
   	void start();
    InputReader(InputDispatcher* inputDispatcher);
    ~InputReader();
private:
	static InputDispatcher* mInputDispatcher;
	static void dispatch(string str);

};

#endif
