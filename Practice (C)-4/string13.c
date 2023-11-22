/* scan two string from user. compare them. */

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100];
	char str2[100];
	
	puts("\nEnter the first string :");
	gets(str1);
	puts("\nEnter the second string :");
	gets(str2);
	
	int res;
	
	res = strcmp(str1,str2);
	
	if(res ==1)
	{
		printf("%s > %s is greater ",str1,str2);
	}
	if(res==-1)
	{
		printf("%s < %s is greater ",str1,str2);
	}
	if(res==0)
	{
		puts("\n Equal inputs");
	}
	
	return 0;
}
