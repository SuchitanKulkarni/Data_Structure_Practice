#include<iostream>
#include <cmath>
#include<stdlib.h>
using namespace std;

int prime_1(int x)
{
	int i;
	
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
			return 0;
		}
		
	}
	
	return 1;
}

int prime_2(int x)
{
	int i;
	
	for(i=2;i<=x/2;i++)
	{
		if(x%i==0)
		{
			return 0;
		}
		
	}
	
	return 1;
}

int prime_3(int x)
{
	int i;
	
	for(i=2;i<=sqrt(x); i++)
	{
		if(x%i==0)
		{
			return 0;
		}
		
	}
	
	return 1;
}

int main()
{
	int n = 10000;
	int num = 2;
	int i = 0;
	
	while(1)
	{
		if(prime_3(num)==1)
		{
			i++;
			
			if(i==n)
			{
				break;
			}
		}
		
		num++;
	}
	
	cout<<num;
}
