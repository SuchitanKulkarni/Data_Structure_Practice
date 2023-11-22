#include<stdio.h>
int main()
{
	int a,b;
	
	int *pa;
	int *pb;
	
	pa = &a;
	pb = &b;
	
	
	puts("\n Enter value of a = ");
	scanf("%d",pa);
	
	puts("\nEnter value of b = ");
	scanf("%d",pb);
	
	printf("\n a = %d",*pa);
	printf("\n b = %d",*pb);
	
	return 0;
}
