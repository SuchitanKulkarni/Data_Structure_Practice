#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[100];
	char arr[100];
	
	cout<<"enter the string : "<<endl;
	cin.getline(str,100);
	
	strcpy(arr,str);
	
	cout<<"arr = "<<arr;
	
	return 0;
}
