#include<stdio.h>
int main()
{
	int x;
	int*px;
	px=&x;
	printf("\n size of px = %d",sizeof(px));
	
	double d;
	double*pd;
	pd = &d;
    printf("\n size of pd = %d",sizeof(pd));
	
	char ch;
	char*pch;
	pch = &ch;
    printf("\n size of pch = %d",sizeof(pch));
	
	return 0;
}
