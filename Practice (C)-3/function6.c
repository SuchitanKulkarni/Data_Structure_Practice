#include<stdio.h>
void myfun(int **ptr);
int main()
{
	int a = 10;
	
	int*pa;
	pa = &a;
	
	printf("\na = %d",a);
	
	myfun(&pa);
	
	printf("\n a = %d",a);
	
	return 0;
}
void myfun(int**ptr)
{
	printf("\n%u",ptr);
	printf("\n%u",*ptr);
	printf("\n%d",**ptr);
	
	**ptr = 20;
}

