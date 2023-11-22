#include<stdio.h>
void show(int a, int b);
int main()
{
	show(10,20);
	
	return 0;
}
void show(int a, int b)
{
	if(a>b)
	{
		return;
	}
	else
	{
		printf("\n%d",a);
		
		show(a+1,b);
	}
}
