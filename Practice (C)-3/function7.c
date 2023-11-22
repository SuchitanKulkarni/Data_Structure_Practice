#include<stdio.h>
void change(float *pa,float *pb);
int main()
{
	float a,b;
	
	a = 2.6;
	b = 3.5;
	
	printf("\na = %f	b = %f",a,b);
	
	change(&a,&b);
	
	printf("\na = %f	b = %f",a,b);
	
	return 0;	
}
void change(float *pa,float *pb)
{
	*pa = 5.6;
	*pb = 3.9;
	
}

