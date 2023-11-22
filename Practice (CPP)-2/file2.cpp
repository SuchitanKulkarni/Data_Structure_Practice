#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char path [] = "D:\\hello.txt";
	
	ifstream fin(path);
	
	if(fin.fail()==1)
	{
		cout<<"file is not connected"<<endl;
		exit(0);
	}
	cout<<"connected"<<endl;
	
	char str[100];
	
	while(fin.eof()==0)
	{
		fin.getline(str,100);
		
		cout<<str<<"\n";
	}
	return 0;
}
