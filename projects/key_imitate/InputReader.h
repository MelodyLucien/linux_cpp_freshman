#ifndef INPUT_READER
#define INPUT_READER
#include <string>

using namespace std;
class InputReader {

public:
   	static void* loop(void *);
   	void start();
    InputReader();
    ~InputReader();
private:
	   static void dispatch(string str);

};

#endif