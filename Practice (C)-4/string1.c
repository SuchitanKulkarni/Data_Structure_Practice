/* find the length of string by pointer notation */

#include<stdio.h>
int main()
{
	char str[100];
	puts("\nEnter the string :");
	gets(str);
	char *p;
	p = str;
	int i=0;
	
	while(*(p+i)!='\0')
	{
		i++;
	}
	
	printf("\n length = %d",i);
	
	return 0;
}
