/* scan an integer form user in below main() .do not declare any variable of your own. */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int * p;
	
	p = (int *)malloc(1*sizeof(int));
	
	puts("\nEnter the integer :");
	
	scanf("%d",p);
	
	printf("\n%d",*(p));
	
	return 0;
}
