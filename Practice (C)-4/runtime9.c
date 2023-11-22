/* Create runtime memory for two string . scan these two string from user and check if they are equal or not */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *str1;
	char *str2;
	
	str1 = (char*)malloc(100*sizeof(char));
	str2 = (char*)malloc(100*sizeof(char));
	
	puts("\nEnter the first string :");
	gets(str1);
	puts("\nEnter the second string :");
	gets(str2);
	
	puts(str1);
	puts(str2);
	
	if(strcmp(str1,str2)==1)
	{
		printf("Equal string");
	}
	else
	{
		printf("Not equal string");
	}
	
	return 0;
}
