#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char source[100];
	char target[100];
	
	cout<<"Enter the string : "<<endl;
	cin.getline(source,100);
	
	strcpy(target,source);
	
	cout<<target;
	
	return 0;
}
