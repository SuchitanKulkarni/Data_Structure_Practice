#include<stdio.h>
int main()
{
	int a,b;
	
	a = 5;
	b = 7;
	
	int *pa;
	int *pb;
	
	pa = &a;
	pb = &b;
	
	int ans;
	
	ans = *pa +*pb;
	printf("\n Answer = %d",ans);
	
	return 0;
}
