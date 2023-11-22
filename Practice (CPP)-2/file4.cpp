#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char path [] = "D:\\hello.txt";
	
	ifstream fin(path);
	
	if(fin.fail()==1)
	{
		cout<<"file is not connected "<<endl;
		exit(0);
	}
	cout<<"connected"<<endl;
	
	int count = 0;
	
	string str;
	
	while(fin.eof()==0)
	{
		getline(fin,str);
		count ++;
		cout<<str<<"\n";
	}
	
	cout<<"no. of lines = "<<count<<endl;
	
	return 0;
}
