#include "iostream"
#include<string.h>
using namespace std;

class student{
	int roll;
	string name;
public:
	void input();
	void display();
};

void student:: input(){
	cout << "Enter name of student ";
	getline(cin,name);
	cout << "Enter roll no " ;
	cin >> roll;
}

void student:: display(){
	cout << "Roll no is " << roll << endl;
	cout << "Name is " << name << endl;
}

class exam: public student{
private:
	int sub1,sub2,sub3,total;
public:
	void input_marks();
	void show();
}; 

void exam:: input_marks(){
	cout << "Enter marks of subject1: ";
	cin >> sub1;
	cout << "Enter marks of subject2: ";
	cin >> sub2;
	cout << "Enter marks of subject3: ";
	cin >> sub3;
}

void exam::show(){
	total= sub1+sub2+sub3;
	cout << "Total is: " << total << "\n";
}

int main()
{
	/* code */
	exam s1;
	s1.input();
	s1.input_marks();
	s1.display();
	s1.show();
	return 0;
}