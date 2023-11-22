/* Declare & initialize an array of 6 integers in main() define function add() to find addition of elements of array print addition back to main() */

#include<stdio.h>
int add(int *P,int n);
int main()
{
	int num[6]={1,2,3,4,5,6};
	
	int res;
	res = add(num,6);
	
	printf("\nAddition = %d",res);
	
	return 0;
}
int add(int *p,int n)
{
	int sum =0;
	int i;
	
	for(i=0;i<n;i++)
	{
		sum = sum + *(p+i);
	}
	
	return sum;
}
