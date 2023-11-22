#include<iostream>
using namespace std;

int findmin(int*p,int x,int n);

int main()
{
	int num[8] = {45,23,2,67,9,78,34,54};
	
	int n = 8;
	int i,j,temp;
	
	for(i=0;i<=n-2;i++)
	{
		int ind = findmin(num,i+1,n-1);
		
		if(num[i]>num[ind])
		{
			temp = num[i];
			num[i] = num[ind];
			num[ind] = temp;
		}
	}
	
	for(i=0;i<8;i++)
	{
		cout<<num[i]<<" ";
	}
}

int findmin(int*p,int x,int n)
{
	int min = *(p+x);
	int ind = x;
	int i;
	for(i=x;i<=n;i++)
	{
		if(min>*(p+i))
		{
			min = *(p+i);
			
			ind = i;
		}
	}
	
	return ind;
}
