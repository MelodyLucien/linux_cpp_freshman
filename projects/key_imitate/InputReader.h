#ifndef INPUT_READER
#define INPUT_READER
class InputReader {

public:
   	static void* loop(void *);
   	void start();
    InputReader();
    ~InputReader();
private:
	    void dispatch();
	    
};

#endif