#include <iostream>

using namespace std;

//This is default arguments
int volume(int len=1,int wid=1,int h=1);
//In case of default arguments it is not necessary to pass all the arguments


int main()
{
    cout<<volume(4);
    return 0;
}

int volume(int len,int wid,int h){
    return(len*wid*h);
}
