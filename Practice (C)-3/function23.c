#include<stdio.h>
void myfun(int x);
int main()
{
	myfun(5);
	
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
		myfun(x-1);
		
		printf("\n%d",x);
	}
}

