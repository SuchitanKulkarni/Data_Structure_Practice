#include<stdio.h>
void myfun(int *px);
int main()
{
	int x = 10;
	
	printf("\n x = %d",x);
	
	myfun(&x);
	
	printf("\n x = %d",x);
	
	return 0;
}
void myfun(int *px)
{
	printf("\n %d",*px);
	
	*px = 7;
}
