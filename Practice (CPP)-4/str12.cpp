/* scan 2 string from user and swap them */

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char temp[100];
	char str[100];
	char arr[100];
	
	cout<<"Enter the first string : "<<endl;
	cin.getline(str,100);
	
	cout<<"Enter the second string : "<<endl;
	cin.getline(arr,100);
	
	strcpy(temp,str);
	strcpy(str,arr);
	strcpy(arr,temp);
	
	cout<<"str = "<<str<<" "<<"arr = "<<arr<<endl;
	
	return 0;
}
