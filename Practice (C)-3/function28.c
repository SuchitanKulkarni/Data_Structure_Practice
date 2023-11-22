/*define your own function */

#include<stdio.h>
int length(char *p);
void copy(char *q,char *p);
int main()
{
	char str[100];
	char str2[100];
	puts("\nEnter the string :");
	gets(str);
	puts(str);
	int len ;
	
	len = length(str);
	copy(str2,str);
	
	printf("\nlength = %d",len);
	printf("\n%s",str);
	
	return 0;
	
}
int length(char *p)
{
	int i;
	while(*(p+i)!='\0')
	{
		i++;
	}
	return i;
}
void copy(char *q,char *p)
{
	int i;
	while(*(p+i)!='\0')
	{
		*(q+i)=*(p+i);
		i++;
	}
}
