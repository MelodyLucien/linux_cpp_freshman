#include<iostream>
#include<string>
using namespace std;
int main(){
    string temp;
    cin>>temp;
    int size=temp.size();
    for(int i=0;i<size;i++){
        cout<<temp.substr(size-i-1,1)<<endl;
    }
    cout<<endl;
    return 0;
}
