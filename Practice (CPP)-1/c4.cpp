#include<iostream>
using namespace std;

class student
{
	public:
		student();
		
};
class person
{
	int age;
	
	void showage()
	{
		cout<<"age = "<<age;
	}
	friend student::student();
};

student::student()
{
	person p;
	p.age = 46;
	p.showage();
	
}

int main()
{
	student std;
}
