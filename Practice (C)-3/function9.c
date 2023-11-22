#include<stdio.h>
int operation(int x, int y ,int *psub);
int main()
{
	int a,b;
	int add,sub;
	
	puts("\nEnter two integers :");
	scanf("%d%d",&a,&b);
	
	add = operation(a,b,&sub);
	
	printf("\nAddition = %d		Subtraction = %d",add,sub);
	
	return 0;
}
int operation(int x,int y,int *psub)
{
	*psub = x-y;
	return x+y;
}
