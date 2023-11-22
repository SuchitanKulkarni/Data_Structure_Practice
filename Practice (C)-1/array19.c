/* 6.sacn a string from user.copy it in another string.*/


#include<stdio.h>
int main()
{
	char str1[100];
	puts("\nEnter the string :");
	gets(str1);
	char str2[100];
	int i;
	
	while(str1[i]!='\0')
	{
		str2[i]=str1[i];
		i++;
	}
	str2[i]='\0';
	
	printf("%s",str2);
	
	return 0;
}
