#include<stdio.h>
int main()
{
	int num[]={9,3,8,5,2,11,17,30};
	int *p=&num[0];
	int i;
	
	printf("\n%u",p+2);
	printf("\n%d",*(p+2));
	printf("\n%d",*p+2);
	printf("\n%u",p+4);
	
	p = p+4;
	
	printf("\n%u",p-1);
	printf("\n%d",*p-3);
	printf("\n%d",*(p+2));
	
	p++;
	printf("\n%d",*p);
	printf("\n%u",p);
	*p = 18;
	printf("\n%d",num[5]+2);
	
	return 0;
}
