#include<stdio.h>
void myfun(int x);
int main()
{
	myfun(3);
	
	return 0;
}
void myfun(int x)
{
	if(x==0)
	{
		return;
	}
	else
	{
		printf("\nHello");
		
		myfun(x-1);
		
		printf("\nBye");
	}
}
