#include<iostream>
#include<fstream>
using namespace std;

class student
{
	public:
		
		char name [90];
		int age;
		
	void getdata()
	{
		cout<<"Enter the name : "<<endl;
		cin.getline(name,89);
		
		cout<<"enter the age :"<<endl;
		cin>>age;
		cin.ignore(1);
	}
	
	void putdata()
	{
		cout<<" name = "<<name<<" age = "<<age<<endl;
	}
};

int main()
{
	char path[] = "D:\\hello.txt";
	
	fstream fobj;
	
	fobj.open(path,ios::in|ios::out|ios::binary);
	
	if(fobj.fail()==1)
	{
		cout<<"not connected"<<endl;
		exit(1);
	}
	cout<<"connected"<<endl;
	
	student std;
	
	while(fobj.read((char*)&std,sizeof(std))!=NULL)
	{
		std.putdata();
	}
	return 0;
	
	
}
