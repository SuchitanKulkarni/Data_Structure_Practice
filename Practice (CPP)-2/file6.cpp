#include<iostream>
#include<fstream>
#include<string.h>
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
	int count = 0;
	int i;
   
	while(fin.eof()==0)
	{
	 fin>>str;
	 
	 cout<<str;
    
     count++;
   }
   
	
	cout<<"\n no. of words : "<<count<<endl;
	
	return 0;
}
