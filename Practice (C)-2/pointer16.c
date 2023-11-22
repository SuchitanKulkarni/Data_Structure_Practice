#include<stdio.h>
int main()
{
	int a,b;
	
	puts("\n Enter two integers :");
	scanf("%d%d",&a,&b);
	
	int *pa;
	int *pb;
	
	pa = &a;
	pb = &b;
	
	printf("\n Addition = %d", *pa + *pb);
	printf("\n Subtraction = %d", *pa - *pb);
	printf("\n Multiplication = %d",*pa * *pb);
	printf("\n Division = %d",*pa / *pb);
	
	return 0;
}
