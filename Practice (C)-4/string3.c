/* find length of string by using length function */

#include<stdio.h>

int length(char *p);
int main()
{
	char str[100]="hi";
	int len;
	
	len = length(str);
	
	printf("\n Length = %d",len);
	
	return 0;
}
int length (char *p)
{
	int i=0;
	
	while(*(p+i)!='\0')
	{
		i++;
	}
	
	return i;
}
