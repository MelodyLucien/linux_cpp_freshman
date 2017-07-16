#ifndef INPUT_DISPATCHER
#define INPUT_DISPATCHER
#include <string>
using namespace std;
class InputDispatcher {
   public:
   static void* loop(void * args);
   	void start();
    InputDispatcher();
    ~InputDispatcher();
    void onDispatch(string keyevent);
    void dispatchToApp();
};

#endif