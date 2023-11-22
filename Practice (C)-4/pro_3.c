/* calculate the perimeter and area of circle */

#include<stdio.h>
int main()
{    
    int r;
	float circum,area;
	puts("\nEnter the radius of circle : ");
	scanf("%d",&r);
	 
	area = 3.14*r*r;
	circum = 3.14*2*r;
	
	printf("\nArea of circle = %f \nCircumference = %f",area,circum);
	
	return 0;
}
