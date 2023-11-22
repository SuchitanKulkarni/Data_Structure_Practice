/* 1.scan a string from user find number of charaters in strings */

#include<stdio.h>
int main()
{
	char str[100];
	puts("\nEnter the string :");
	gets(str);
	int i,count=0;
	
	while(str[i]!='\0')
	{
		count++;
		i++;
	}
	
	printf("\nCount = %d",count);
	
	return 0;
}
