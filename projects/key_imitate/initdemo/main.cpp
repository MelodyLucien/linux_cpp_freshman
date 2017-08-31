#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mount.h>

using namespace std;

int main()
{
    umask(0);
    mkdir("/home/zhouhao2/myGit/dirinit",0755);
    mkdir("/home/zhouhao2/myGit/dirinit/mount",0755);
    mount("tmpfszhouhao2","/home/zhouhao2/myGit/dirinit/mount","tmpfszhouhao2",MS_NOSUID,"mode=0755");

    cout << "Hello world!" << endl;
    return 0;
}
