#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main()
{
	int num1,num2,n,i;
	
	while(2)
	{
		cout<<"press\n1.Addition\n2.subtraction\n3.multiplication\n4.division";
		cout<<"\n\nEnter your choice";
		cin>>n;
			
	cout<<"Enter the two values :"<<endl;
	cin>>num1>>num2;
		switch(n)
		{
			case 1 : cout<<num1<<"+"<<num2 <<"=" <<num1+num2<<endl;
			         break;
			case 2 : cout<<num1<<"-"<<num2<< "=" <<num1-num2<<endl;
			         break;
			case 3 : cout<<num1<<"*"<<num2 <<"=" <<num1*num2<<endl;
			         break;
			case 4 : cout<<num1<<"/"<<num2<< "=" <<num1/(float)num2<<endl;
			         break;
			default : cout<<"wrong input"<<endl;
			
		}
		
		cout<<"do you want to continue (enter 1 for yes , 0 for no) :";
		cin>>i;
		
		if(i==0)
		{
			return 0;
		}
	}
}
