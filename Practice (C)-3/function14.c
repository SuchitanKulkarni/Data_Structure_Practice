#include<stdio.h>
void change(int *m,int *n);
int main()
{
	int x = 5;
	int y = 10;
	
	printf("\n%d,%d",x,y);
	
	change(&x,&y);
	
	printf("\n%d,%d",x,y);
	
	return 0;
}
void change(int *m,int *n)
{
	*m = 7;
	*n = 13;
}
