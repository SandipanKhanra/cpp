#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    //This prints random number
    //for(int i=0;i<25;i++)
        //cout<<rand()<<endl;
    srand(time(0)); //srand() allows us to change the rand() algorithm a little bit
    
    //time() makes it random as its keeps on changing every second
    for(int i=0;i<10;i++)
        cout<<rand()%3<<endl; //This will print random no in range 0-2
    return 0;
}
