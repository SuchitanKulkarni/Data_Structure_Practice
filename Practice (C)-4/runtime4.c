/* scan n fraction values from user ,print their addition . */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	float *p,n;
	int sum =0,i;
	
	p = (float *)malloc(n*sizeof(float));
	
	puts("\nEnter the fraction values :");
	for(i=0;i<n;i++)
	{
		scanf("%f",p+i);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",*(p+i));
	}
	for(i=0;i<n;i++)
	{
		sum = sum +*(p+i);
	}
	
	printf("\nAddition = %d",sum);
	
	return 0;
	
}
