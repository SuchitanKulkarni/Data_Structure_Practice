#include<stdio.h>
void show(int x);
int main()
{
	int num[5] = {7,13,8,2,15};
	show(num[0]);
	show(num[1]);
	show(num[2]);
	
	return 0;
}
void show(int x)
{
	printf("\n%d",x);
}
