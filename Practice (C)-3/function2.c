#include<stdio.h>
void change(int *a);
int main()
{
	int x= 10;
	
	change(&x);
	
	printf("\nAfter function x = %d",x);
	
	return 0;
}
void change(int *a)
{
	printf("\n value = %d",*a);
}
