#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char path[] = "D:\\hello.txt";
	
	fstream  fobj;
	
	fobj.open(path,ios::ate);
	
	if(fobj.fail()==1)
	{
		cout<<"not connected"<<endl;
		exit(1);
	}
	cout<<"connected"<<endl;
	
	return 0;
}
