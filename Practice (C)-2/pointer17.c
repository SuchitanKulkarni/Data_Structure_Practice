#include<stdio.h>
int main()
{
	int a,b;
	a=3;
	b=6;
	
	int *pa;
	int *pb;
	
	pa = &a;
	pb = &b;
	
	int **ppa;
	int **ppb;
	
	ppa = &pa;
	ppb = &pb;
	
	printf("\n square of a = %d",**ppa * **ppa);
	printf("\n square of b = %d",**ppb * **ppb);
	
	return 0;
	
}
