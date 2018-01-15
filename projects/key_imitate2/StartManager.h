#ifndef START_MANAGER
#define START_MANAGER
#include"InputDispatcher.h"
#include"InputReader.h"

class StartManager {
   public:
   	void start();
   	void stop();
    void init();
    StartManager();
    ~StartManager();
   private:
   	InputReader* mInputReader;
};

#endif
