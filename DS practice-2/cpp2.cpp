#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

int main()
{
	char name[20];
	cout<<"Enter the name of file to be create";
	cin>>name;
	ofstream fout;
	fout.open(name);
	if(!fout)
	{
		cout<<"Error opening file";
		exit(1);
		
	}
	cout<<"writing in a file";
	cout<<"enter the content ton the file end with ctrl D";
	string data;
	while(getline(cin,data))
	{
		if(data=="^D")
		{
			break;
		}
		fout<<data<<endl;
	}
	fout.close();
	
	ifstream fin;
	fin.open(name);
	if(!fin)
	{
		cout<<"Error opening file";
		exit(1);
	}
	cout<<"Reading the content of the file";
	while(fin)
	{
		getline(cin,data);
		cout<<data<<endl;
	}
	fin.close();
	return 0;
	
}
