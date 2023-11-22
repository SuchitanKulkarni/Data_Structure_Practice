#include<stdio.h>
int addition(int x,int y);
int subtraction (int x,int y);
int main()
{
	int a,b,add,sub;
	puts("\nEnter two integers : ");
	scanf("%d%d",&a,&b);
	
	add = addition(a,b);
	sub = subtraction(a,b);
	
	printf("\nAddition = %d		Subtraction = %d",add,sub);
	
	return 0;
}
int addition(int x, int y)
{
	return x+y;
}
int subtraction(int x,int y)
{
	return x-y;
}
