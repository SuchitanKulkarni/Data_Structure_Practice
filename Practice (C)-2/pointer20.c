#include<stdio.h>
int main()
{
	float a,b;
	a= 2.5;
	b = 3.9;
	
	float *ptr;
	ptr = &a;
	
	printf("\n a = %f",*ptr);
	
	ptr = &b;
	
	printf("\n b = %f",*ptr);
	
	return 0;
}
