#include<stdio.h>
void myfun(int *pa);
int main()
{
	int a = 10;
	
	printf("\n%d",a);
	
	myfun(&a);
	
	printf("\n%d",a);
	
	return 0;
	
}
void myfun(int *pa)
{
	*pa = 20;
}
