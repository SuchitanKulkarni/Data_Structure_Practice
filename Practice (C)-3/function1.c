#include<stdio.h>
void change(int *px);
int main()
{
	int x = 10;
	
	change(&x);
	
	printf("\n x = %d",x);
	
	return 0;
}

void change(int *px)
{
	*px = 50;
}
