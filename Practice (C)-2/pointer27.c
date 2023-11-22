#include<stdio.h>
void print(int *p,int n);
int main()
{
	int num[8]={1,2,3,4,5,6,7,8};
	
	print(num,8);
	
	return 0;
}
void print(int *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf(" %d ",*(p+i));
	}
}
