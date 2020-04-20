#include <iostream>

using namespace std;

int t=34;
//Global variable

int main()
{
    int t=20;//Local variable
    //if there is two variable with same name one is local and other one gloabl
    //then program will take local one
    //in order to use global one we use unary scope resolution operator

    cout<<::t;
    return 0;
}
