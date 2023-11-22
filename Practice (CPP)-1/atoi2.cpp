#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	char str[90];
	
	cout<<"Enter the string : "<<endl;
	cin.getline(str,56);
	
	int x;
	
	x = atoi(str);
	
	cout<<"x = "<<x<<endl;
	
	cout<<"Enter the string : "<<endl;
	cin.getline(str,56);
	

	
	x = atoi(str);
	
	cout<<"x = "<<x<<endl;;
	
	cout<<"Enter the string : "<<endl;
	cin.getline(str,56);
	

	
	x = atoi(str);
	
	cout<<"x = "<<x<<endl;;
	
	return 0; 
}
