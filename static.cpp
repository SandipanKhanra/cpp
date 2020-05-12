#include<iostream>
using namespace std;

class stat{
	int a;
public:
	static int x;
	static void s(){
		cout<< "Value of x is " << x << endl;
	}
	void inc(){
		a=++x;
	}
};

int stat:: x;

int main()
{
	stat s1,s2,s3;
	s1.inc();
	s2.inc();
	s3.inc();
	stat::s();
	return 0;
}
