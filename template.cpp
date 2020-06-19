#include <iostream>



using namespace std;
template <typename T>

T square(T x){
    return x*x;
}
int main()
{
    cout << square(5) << endl; //Compiler will automatically figure out the data type
    cout << square(2.5);  //But this comes with a price called code bloat- though it seems to be one function
    //but actually it coccupies different spaces for the different types of data
    return 0;
}

//Output
//25
//6.25
