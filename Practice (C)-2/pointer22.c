#include<stdio.h>
int main()
{
	int a=5;
	
	int *pa;
	
	pa = &a;
	
	*pa = 15;
	
	printf("\n a = %d",a);
	 return 0;
	 
}
