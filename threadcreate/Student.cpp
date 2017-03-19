#include "Student.h"
#include<jni.h>
#include <iostream>
using namespace std;

extern JNIEnv * GlobalEnv;

extern jclass GlobalJclass;

namespace zhouhao2{

void callStaticMethod(){
       cout<<"in callStaticMethod GlobalJclass = "<< GlobalJclass  <<"GlobalEnv = " << GlobalEnv << endl;
       jmethodID mid =
       GlobalEnv->GetStaticMethodID(GlobalJclass,"notifyMotionEvent", "()V");
      //GlobalEnv->GetMethodID(GlobalJclass,"notifyMotionEvent", "()V");
      if (mid == NULL) {
          return; /* method not found */
        }
      cout<<"using zhouhao2 callstaticmethod！"<<endl;
      GlobalEnv->CallStaticVoidMethod(GlobalJclass, mid);
}

Student::Student(){
   cout<<"empty construction invoke"<<endl;
}

Student::Student(int m, int s):number(m),score(s){

}

void Student::introduce(){
   cout<<"my number is  "<<number<<" my score is "<<score<<endl;
   callStaticMethod();
}

}
