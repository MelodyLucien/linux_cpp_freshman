#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mount.h>
#include <stdio.h>

using namespace std;

int main()
{
    umask(0);
    mkdir("/home/zhouhao2/myGit/dirinit",0755);
    mkdir("/home/zhouhao2/myGit/dirinit/mount",0755);
    mount("tmpfszhouhao2","/home/zhouhao2/myGit/dirinit/mount","tmpfszhouhao2",MS_NOSUID,"mode=0755");

    const char *p1 = "hello1";

    printf("%s\n",p1);

   // p1[0]='g'; wrong


    char * const p2 = "hello2";

     // p2[0]='g';

    printf("%s\n",p2);

    return 0;
}
