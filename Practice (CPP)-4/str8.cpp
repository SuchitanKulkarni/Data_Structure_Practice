#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[100];
	int len;
	cout<<"Enter the string : "<<endl;
	cin.getline(str,100);
	
	len = strlen(str);
	cout<<"\nlength = "<<len;
	
	return 0;
}
