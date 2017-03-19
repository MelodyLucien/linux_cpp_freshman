#include<iostream>
#include<jni.h>
#include <pthread.h>
#include<com_hisense_motionkit_MotionMonitorController.h>
#include "Student.h"

#define FLAG 0
#undef Flag
#define Flag 1
#define NUM_THREADS 5
using namespace std;

int status = 0;
bool  isAttached =false;
JNIEnv * GlobalEnv;
jclass GlobalJclass;
JavaVM *cached_jvm;

void* say_hello(void* args)
{
    cout << "say_hello GlobalEnv = " << GlobalEnv << endl;
    status = cached_jvm->AttachCurrentThread((void **)&GlobalEnv, NULL);
    if(status < 0) {
       cout<<"callback_handler: failed to attach current thread"<<endl;
       return (void*)0;
    }else{
       isAttached = true;
    }

    // GlobalEnv = envnow;
    cout << "say_hello after GlobalEnv = " << GlobalEnv << "GlobalJclass = "<< GlobalJclass << endl;

    zhouhao2::Student stu;
    stu.introduce();

    //detattch native thread
    if(isAttached){
       cached_jvm->DetachCurrentThread();
    }
}


namespace zhouhao2{

int main(){

	pthread_t tids;
	int ret = pthread_create(&tids, NULL, say_hello, NULL);
	if (ret != 0)
	{
	   cout << "pthread_create error: error_code=" << ret << endl;
	}

	//key step
	pthread_join(tids, NULL);

   return 0;
}

}


/*
 * Class:     com_hisense_motionkit_MotionMonitorController
 * Method:    startMonitor
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_hisense_motionkit_MotionMonitorController_startMonitor
  (JNIEnv *env, jclass cls){
       GlobalEnv=env;
       GlobalJclass=cls;
       cout<<"i start !! GlobalJclass = "<< GlobalJclass << "GlobalEnv = "<< GlobalEnv <<endl;

       //attach thread
        if(NULL == cached_jvm)
    {
        cout<<"g_JVM == NULL"<<endl;
        return ;
    }


       zhouhao2::main();
}

/*
 * Class:     com_hisense_motionkit_MotionMonitorController
 * Method:    stopMonitor
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_hisense_motionkit_MotionMonitorController_stopMonitor
  (JNIEnv *, jclass){
      cout<<"i stop !!"<<endl;

  }

  JNIEXPORT jint JNICALL
JNI_OnLoad(JavaVM *jvm, void *reserved)
{

cached_jvm = jvm; /* cache the JavaVM pointer */

return JNI_VERSION_1_8;
}

