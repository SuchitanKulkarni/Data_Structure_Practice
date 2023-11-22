#include<stdio.h>
void myfun(int *m);
int main()
{
	int a = 5;
	
	int *p = &a;
	
	myfun(p);
	
	printf("\n%d",a);
	
	return 0;
}
void myfun(int *m)
{
	*m = 15;
}
