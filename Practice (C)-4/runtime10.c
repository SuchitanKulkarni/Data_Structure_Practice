#include<stdio.h>
#include<stdlib.h>
int main()
{
	char * str;
	
	str = (char*)malloc(100*sizeof(char));
	
	puts("\nEnter the string :");
	gets(str);
	puts(str);
	
	free(str);
	
	return 0;
}
