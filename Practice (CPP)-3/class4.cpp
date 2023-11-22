#include<iostream>
using namespace std;

class student
{
	public:
		char name[30];
		int age;
		char address[30];
		
};

int main()
{
	student s1,s2,s3;
	
	cout<<"Enter the name of student : "<<endl;
	cin.getline(&s1.name[0],30);
	
	cout<<"Enter the address : "<<endl;
	cin.getline(&s1.address[0],30);
	
	cout<<"Enter the age : "<<endl;
	cin>>s1.age;
	
	cout<<"Enter the name of student : "<<endl;
	cin.getline(&s2.name[0],30);
	cin.getline(&s2.name[0],30);
	
	cout<<"Enter the address : "<<endl;
	cin.getline(&s2.address[0],30);
	
	cout<<"Enter the age : "<<endl;
	cin>>s2.age;
	
	cout<<"Enter the name of student : "<<endl;
	cin.getline(&s3.name[0],30);
	cin.getline(&s3.name[0],30);
	
	cout<<"Enter the address : "<<endl;
	cin.getline(&s3.address[0],30);
	
	cout<<"Enter the age : "<<endl;
	cin>>s3.age;
	
	cout<<&s1.name[0]<<"  "<<s1.age<<"  "<<&s1.address[0]<<endl;
	cout<<&s2.name[0]<<"  "<<s2.age<<"  "<<&s2.address[0]<<endl;
	cout<<&s3.name[0]<<"  "<<s3.age<<"  "<<&s3.address[0]<<endl;
	
	return 0;
}
