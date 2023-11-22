#include<stdio.h>
void myfun(int m,int **n);
int main()
{
	int a=5,b=10;
	
	printf("\n%d,%d",a,b);
	
	int *p;
	int *q;
	
	p = &a;
	q = &b;
	
	myfun(*p,&q);
	
	printf("\n%d,%d",a,b);
	
	return 0;
	
}
void myfun(int m,int **n)
{
	m = 5;
	**n = 15;
}

