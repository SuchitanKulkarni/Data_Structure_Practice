#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char path[] = "D:\\hello.txt";
	
	fstream fobj;
	
	fobj.open(path,ios::in | ios::out|ios::app);
	
	if(fobj.fail()==1)
	{
		cout<<"not connected"<<endl;
		exit(1);
	}
	cout<<"connected"<<endl;
	
	fobj<<"end of the file"<<endl;
	
	fobj.seekp(0,ios::beg);
	
	fobj<<"eof"<<endl;
	fobj.seekg(0,ios::beg);
	
	char str[100];
	
	fobj.getline(str,100);
	
	cout<<"\n str = "<<str;
	
	return 0;
}
