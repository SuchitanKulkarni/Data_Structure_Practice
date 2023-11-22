/* find out the area and circum of circle by circle() */

#include<stdio.h>
void circle(int r, float *p, float *q);
int main()
{
	int rad;
	float area,circum;
	puts("\nEnter the radius :");
	scanf("%d",&rad);
	
	circle(rad,&area,&circum);
	
	printf("\n Area = %f circumference = %f ",area,circum);
	
	return 0;
}
void circle(int r,float *p, float *q)
{
	*p = 3.14*r*r;
	*q = 3.14*2*r;
}
