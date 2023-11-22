/* gor given main() san two integers from user . print their addition without declaring any variable.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;

	
	p = (int*)malloc(2*sizeof(int));
	puts("\nEnter two integers :");
	scanf("%d",p+0);
	scanf("%d",p+1);
	
	printf("\nAddition = %d",*(p+0)+ *(p+1));
	
	return 0;
}
