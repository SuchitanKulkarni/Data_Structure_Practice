#include<stdio.h>
int main()
{
	int a,b;
	puts("\n Enter two integers :");
	scanf("%d%d",&a,&b);
	
	int*pa;
	int*pb;
	
	pa = &a;
	pb = &b;
	
	printf("\nAddition = %d",*pa +*pb);
	
	return 0;
}
