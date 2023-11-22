/*  Calculate the area of rectangle */

#include<stdio.h>
int main()
{
	int len,wid,Area;
	puts("\nEnter the length and width of rectangle : ");
	scanf("%d%d",&len,&wid);
	
	Area = len*wid;
	printf("\n Area of Rectangle : %d",Area);
}
