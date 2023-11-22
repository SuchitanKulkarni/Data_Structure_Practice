#include<stdio.h>
void rectangle(int x,int y,int *parea,int *pperi);
int main()
{
	int len,wid;
	int area,peri;
	
	puts("\nEnter the length and width :");
	scanf("%d%d",&len,&wid);
	
	rectangle(len,wid,&area,&peri);
	
	printf("\nArea = %d		perimeter = %d",area,peri);
	
	return 0;
}
void rectangle(int x,int y,int *parea,int *pperi)
{
	*parea = x*y;
	*pperi = 2*(x+y);
}
