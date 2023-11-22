#include<stdio.h>
#include<string.h>
int main()
{
	char s1 [100]= "mat";
	char s2 [100]= "cat";
	
	int res;
	res = strcmp(s1,s2);
	
	printf("res = %d",res);
	
	return 0;
	
}
