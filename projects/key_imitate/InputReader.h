#ifndef INPUT_READER
#define INPUT_READER
class InputReader {
   public:
   	static void* loop();
   	void start();
    InputReader();
    ~InputReader();
};

#endif