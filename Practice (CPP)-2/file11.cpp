#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char path[ ] =  "D:\\hello.txt";
	
	fstream fobj;
	
	fobj.open(path,ios::app);
	
	if(fobj.fail()==1)
	{
		cout<<"not connected"<<endl;
		exit(1);
	}
	cout<<"connected"<<endl;
	
	fobj<<"happy"<<endl;
    fobj.seekg(0,ios::beg);
	
	fobj<<"end of file"<<endl;
	
	fobj.seekg(0,ios::beg);
	
	char str[100];
	
	fobj.getline(str,89);
	
	cout<<"str = "<<str;
	
	return 0;	
}
