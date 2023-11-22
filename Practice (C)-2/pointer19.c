#include<stdio.h>
int main()
{
	int a;
	
	int *pa;
	pa = &a;
	
	int **ppa;
	ppa = &pa;
	
	puts("\nEnter a integer :");
	scanf("%d",*ppa);
	
	printf("\n Cube of a = %d",*pa * *pa * *pa);
	
	return 0;
}
