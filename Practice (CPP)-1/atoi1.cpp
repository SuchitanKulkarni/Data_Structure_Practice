#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	char str1[80];
	char str2[89];
	
	cout<<"Enter the string 1: "<<endl;
	cin.getline(str1,23);
	
	cout<<"Enter thr string 2 : "<<endl;
	cin.getline(str2,67);
	
	int x,y;
	
	x = atoi(str1);
	y = atoi(str2);
	
	int ans = x+y;
	
	cout<<"addition =  "<<ans<<endl;
	
	return 0;
	
}
