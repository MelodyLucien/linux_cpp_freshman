#include <iostream>
#include "com_zhouhao2_debug_Test.h"

using namespace std;
JNIEnv * mGlobalEnv;

jclass mGlobalCls;

/*
 * Class:     com_zhouhao2_debug_Test
 * Method:    setConfiguration
 * Signature: (Lcom/zhouhao2/debug/CustomConfiguration;)V
 */
JNIEXPORT void JNICALL Java_com_zhouhao2_debug_Test_setConfiguration
  (JNIEnv * env, jclass, jobject obj){

     jclass conCls = env->GetObjectClass(obj);

     jfieldID  field = env->GetStaticFieldID(conCls,"pointerGestureQuietInterval","I");
     jint value = env->GetStaticFloatField(conCls,field);

     field = env->GetStaticFieldID(conCls,"pointerGestureTapInterval","F");
     jfloat value1= env->GetStaticFloatField(conCls,field);





     cout << "pointerGestureQuietInterval: " << value<<endl;
     cout << "i am fine ,i am ok"<<endl;

     cout << "pointerGestureDragMinSwitchSpeed "<<value1<<endl;

}

JNIEXPORT void JNICALL Java_com_zhouhao2_debug_Test_initArray
(JNIEnv * env, jclass cls){
  mGlobalEnv=env;
  mGlobalCls=cls;
  cout<<"hello"<<endl;
  jfieldID obj= env->GetStaticFieldID(cls,"ints","[[I");
  if(obj==NULL)
  {
    cout<<"i am error!!"<<endl;
  }else{
    cout<<"success"<<endl;
  }
  int i;
  jobjectArray result;
  jclass intArrCls=env->FindClass("[I");
  if(intArrCls==NULL){
     cout<<"fail to create int arr in native"<<endl;
     return;
  }
  result = env->NewObjectArray(10,intArrCls,NULL);
  if(result==NULL)
  {
    cout<<"fail to create inner array"<<endl;
  }
  for(i=0;i<10;i++){
     jintArray iarr=env->NewIntArray(10);
     jint tmp[256];
     int j;
     for(j=0;j<10;j++){
       tmp[j]=10;
     }

     env->SetIntArrayRegion(iarr,0,10,tmp);
     env->SetObjectArrayElement(result,i,iarr);
     env->DeleteLocalRef(iarr);
  }
  env->SetStaticObjectField(cls,obj,result);
//  jmethodID mid=env->GetStaticMethodID(cls,"printOutArray","()V");
 // env->CallStaticVoidMethod(cls,mid);

  //getConfiguration from java layer
  //jfieldID obj1= env->GetStaticFieldID(cls,"configuration","Lcom/zhouhao2/debug/CustomConfiguration;");
  //jobject  configuration = env->GetStaticObjectField(cls,obj1);
/*
  jclass conCls = env->FindClass("com/zhouhao2/debug/CustomConfiguration");
  if(conCls == NULL){
     cout << "conCls == null"<<endl;
  }else{
     jfieldID  pointerGestureTapInterval = env->GetStaticFieldID(conCls,"pointerGestureTapInterval","F");
     jfloat value = env->GetStaticFloatField(conCls,pointerGestureTapInterval);
     cout << "pointerGestureTapInterval: " << value<<endl;
  }
*/
}

