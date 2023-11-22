/* Create a database of 6 city names. check if pune is present in database or not. */

#include<stdio.h>
#include<string.h>
int main()
{
	char city[6][30];
	int i;
	puts("\nEnter the string :");
	for(i=0;i<6;i++)
	{
		gets(&city[i][0]);
	}
	int res;
	res = strcmp(&city[i][0],"pune");
	
	if(res==0)
	{
		printf(" not Found");
	}
	if(res!=0)
	{
		printf(" found");
	}
	return 0;
}
