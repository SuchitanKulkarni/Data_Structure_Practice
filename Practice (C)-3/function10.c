#include<stdio.h>
void circle(float r,float *parea,float *pcircum);
int main()
{
	float rad,area,circum;
	puts("\nEnter the radius :");
	scanf("%f",&rad);
	
	circle(rad,&area,&circum);
	
	printf("\nArea = %f		Circumference = %f",area,circum);
	
	return 0;
}
void circle(float r,float *parea,float *pcircum)
{
	*parea = 3.14*r*r;
	*pcircum = 3.14*2*r;
}
