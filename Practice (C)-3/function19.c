#include<stdio.h>
void myfun(int x);
int main()
{
	myfun(1);
	
	return 0;
}
void myfun(int x)
{
	if(x<=5)
	{
		printf("\n%d",x);
		
		myfun(x+1);
	}
}
