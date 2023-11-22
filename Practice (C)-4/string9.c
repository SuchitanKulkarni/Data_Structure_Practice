#include<stdio.h>
void copy(char *t,char *s);
int main()
{
	char target[100];
	char source[100];
	
	puts("\nenter the string :");
	gets(source);
	
	copy(target,source);
	
	printf("\nTarget = %s",target);
	
	return 0;
	
}
void copy(char *t,char *s)
{
	int i;
	
	while(*(s+i)!='\0')
	{
		*(t+i)=*(s+i);
		
		i++;
	}
	*(t+i)='\0';
	
	return;
}
