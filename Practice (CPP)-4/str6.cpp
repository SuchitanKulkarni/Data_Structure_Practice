/* scan 2 strings from user and print them */

#include<iostream>
using namespace std;

int main()
{
	char str1[100];
	char str2[89];
	
	cout<<"enter the string 1:"<<endl;
	cin.getline(str1,99);
	
	cout<<"enter the string 2:"<<endl;
	cin.getline(str2,60);
	
	cout<<str1<<"\n"<<str2;
	
	return 0;
}
