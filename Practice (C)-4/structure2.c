#include<stdio.h>
typedef struct number
{
	int x,y;
}number;

int main()
{
	number t1={3,5},t2={7,8};
	
	number t3;
	
	t3 = t1;
	t1= t2;
	t2= t3;
	
	printf("\n%d %d",t1.x,t1.y);
	printf("\n%d %d",t2.x,t2.y);
	
	return 0;
	
	
}
