#include<stdio.h>
int main()
{
	int num[]={6,9,8,15,20};
	
	int *p;
	p=num;
	
	printf("\n%u",p+1);
	printf("\n%d",*p+1);
	printf("\n%d",*(p+2));
	
	p=p+2;
	
	printf("\n%d",*p-1);
	printf("\n%d",*(p+1));
	printf("\n%d",*num);
	printf("\n%d",*(num+1));
	printf("\n%d",*(num)+1);
	
	return 0;
}
