#include <iostream>

using namespace std;

void print(int x){
    cout<<"Now printing an integer "<<x<<endl;
}

//It provides multiple definitions
//of the function by changing number
//of parameters, change datatype
//of parameters, return type
//doesn’t play anyrole.
void print(double x){
    cout<<"Printing a double "<<x<<endl;
}
int main()
{

    print(10);
    print(45.7);
    return 0;
}
