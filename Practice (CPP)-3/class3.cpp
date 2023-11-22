#include<iostream>
using namespace std;

class employee
{
	public:
		int age;
		char name[30];
};

int main()
{
	employee emp;
	
	cout<<"enter the name of employee : "<<endl;
	cin.getline(&emp.name[0],30);
	
	cout<<"Enter the age : "<<endl;
	cin>>emp.age;
	
	cout<<&emp.name[0]<<" "<<emp.age;
	
	return 0;
	
}
