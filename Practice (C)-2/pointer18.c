#include<stdio.h>
int main()
{
	int a,b;
	
	int *pa;
	int *pb;
	
	pa = &a;
	pb = &b;
	
	puts("\nEnter two integers :");
	scanf("%d%d",pa,pb);
	
	if(*pa>*pb)
	{
		printf("\n largest = %d",*pa);
		
	}
	else
	{
		printf("\n largest = %d",*pb);
		
	}
	
	return 0;
}
