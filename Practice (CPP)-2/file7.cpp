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
	
	fobj.open(path,ios::out|ios::binary);
	
	if(fobj.fail()==1)
	{
		cout<<"not connected"<<endl;
		exit(1);
	}
	cout<<"connected"<<endl;
	
	student std;
	
	for(int i =0;i<4;i++)
	{
		std.getdata();
		
		fobj.write((char*)&std,sizeof(std));
	}
	
	fobj.close();
	
	return 0;
}
