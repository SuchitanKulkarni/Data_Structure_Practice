#include<stdio.h>
void change(int *pa,int *pb);
int main()
{
	int a,b;
	
	a=5;
	b=10;
	
	printf("\n a = %d	b = %d",a,b);
	
	change(&a,&b);
	
	printf("\n a = %d	b = %d",a,b);
	
	return 0;
}
void change(int *pa,int *pb)
{
	*pa = 7;
	*pb = 15;
}
