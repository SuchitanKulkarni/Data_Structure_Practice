#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *p;
	
	p = (char*)malloc(100*sizeof(char));
	puts("\nEnter the string :");
	gets(p);
	puts(p);
	
	return 0;
}
