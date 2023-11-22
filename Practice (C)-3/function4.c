#include<stdio.h>
void myfun(int px);
int main()
{
	int x = 10;
	
	printf("x = %d",x);
	
	myfun(x);
	
	printf("\nx = %d",x);
	
	return 0;
}
void myfun(int px)
{
	px =70;
}
