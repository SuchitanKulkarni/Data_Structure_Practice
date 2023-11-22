#include<stdio.h>
void show(int x);
int main()
{
	int n;
	puts("\nEnter the value :");
	scanf("%d",&n);
	
	show(n);
	
	return 0;
}
void show(int x)
{
	if(x==0)
	{
		return ;
	}
	else
	{
		show(x-1);
		
		printf("\n%d",x);
	}
}
