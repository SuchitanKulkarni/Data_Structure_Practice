#include<stdio.h>
int main()
{
	int a,b;
	
	int *ptr;
	ptr = &a;
	
	printf("\n Enter an integer :");
	scanf("%d",ptr);
	
	printf("\n a = %d",a);
	
	ptr = &b;
	
	printf("\n Enter an integer :");
	scanf("%d",ptr);
	
	printf("\n b = %d",b);
	
	return 0;
}
