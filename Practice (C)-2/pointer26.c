#include<stdio.h>
int main()
{
	int x =10;
	
	int *px;
	px = &x;
	
	printf("\n%d",**px);
	
	return 0;
}
