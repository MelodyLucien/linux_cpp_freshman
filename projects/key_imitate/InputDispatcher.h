#ifndef INPUT_DISPATCHER
#define INPUT_DISPATCHER
class InputDispatcher {
   public:
   static void* loop(void * args);
   	void start();
    InputDispatcher();
    ~InputDispatcher();
};

#endif