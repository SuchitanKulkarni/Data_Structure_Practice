/* Allocate memory for string in runtime then scan string form user & print its length */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char * str;
	
	str = (char*)malloc(100*sizeof(char));
	puts("\nEnter the string :");
	gets(str);
	puts(str);
	int len;
	len = strlen(str);
	
	printf("\nLength = %d",len);
	
	return 0;
}
