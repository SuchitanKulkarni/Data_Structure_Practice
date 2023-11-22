/* Scan array of 10 integers from user in main() define function copy to copy this array into another array. */

#include<stdio.h>
void copy(int *p,int *n);
int main()
{
	int num1[10];
	int num2[10];
	int i;
	
	puts("\nEnter the 10 integers for array :");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&num1[i]);
	}
	
	copy(num1,num2);
	
	for(i=0;i<10;i++)
	{
		printf("%d ",num2[i]);
	}
	
	return 0;
	
}
void copy(int *p,int *n)
{
	int i;
	for(i=0;i<10;i++)
	{
		*(n+i) = *(p+i);
	}
}
