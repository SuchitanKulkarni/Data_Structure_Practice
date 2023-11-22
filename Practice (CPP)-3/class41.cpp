/* for class student containing age and marks scan data for two student in main(),swap the data of two student */


#include<iostream>
using namespace std;

class student
{
	public:
		int age,marks;
};

int main()
{
	student s1,s2;
	
	cout<<"enter the age 1 : "<<endl;
	cin>>s1.age;
	
	cout<<"enter the marks 1 : "<<endl;
	cin>>s1.marks;
	
	cout<<"enter the age 2 : "<<endl;
	cin>>s2.age;
	
	cout<<"enter the marks 2 : "<<endl;
	cin>>s2.marks;
	
	student s3;
	
	s3 = s1;
	s1 = s2;
	s2 = s3;
	
	cout<<" Age 1 : "<<s1.age<<" marks 1 : "<<s1.marks<<endl;
	cout<<"Age 2 : "<<s2.age<<"marks 2 : "<<s2.marks<<endl;
	
	return 0;
}
