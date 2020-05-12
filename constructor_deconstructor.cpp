#include<iostream>
using namespace std;
class addition{
	int a,b;
public:
	addition(int,int);
	~addition();
	int add(){
		return(a+b);
	}
	void show();
};

addition::addition(int x,int y){
	a=x;
	b=y;
}

addition:: ~addition(){
	cout<< "Memory is deallocated successfully" << endl;
}

void addition:: show(){
	cout << "Value in a and b is "<< a << " "<< b << endl;
}

main(){
	addition add1(3,5);
	cout<<add1.add()<<endl;
	//add1.show();
}
