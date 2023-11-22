#include<stdio.h>
void myfun(int **q);
int main()
{
	int a =10;
	int *p;
	p = &a;
	
	myfun(&p);
	
	printf("\n%d",a);
	
	return 0;
}
void myfun(int **q)
{
	**q = 20;
}
