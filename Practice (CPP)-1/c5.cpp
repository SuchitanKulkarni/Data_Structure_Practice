#include<iostream>
using namespace std;

class student
{
	student();
	friend int main();
};

class person
{
	int age;
	void showage();
	friend class student;
};

student:: student()
{
	person obj;
	obj.age =  35;
	obj.showage();
}
void person::showage()
{
	cout<<"age = "<<age;
}
int main()
{
	student std;
	
	return 0;
}
