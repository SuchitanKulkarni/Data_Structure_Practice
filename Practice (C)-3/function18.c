#include<stdio.h>
void myfun(int x);
int main()
{
	myfun(1);
	
	return 0;
}
void myfun(int x)
{
	if(x<=3)
	{
		printf("\nHello");
		
		myfun(x+1);
		
		printf("\nbye");
	}
}
