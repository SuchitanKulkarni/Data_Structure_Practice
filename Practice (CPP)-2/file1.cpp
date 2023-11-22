#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char path[] = "D:\\hello.txt";
	
	ifstream fin(path);
	
	if(fin.fail()==1)
	{
		cout<<"file not connected "<<endl;
		exit(0);
	}
	cout<<"connetced"<<endl;
	
	char ch;
	
	while(fin.eof()==0)
	{
		fin>>ch;
		
		cout<<ch<<" ";
	}
	
	return 0;
}
