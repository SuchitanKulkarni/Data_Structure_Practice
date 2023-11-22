/* scan a string from user in main().define function toupper () to convert this string into capital alphabet */

#include<stdio.h>
void toupper(char *p);
int main()
{
	char str[100];
	puts("\nEnter the string :");
	gets(str);
	puts(str);
	
	toupper(str);
	
	printf("%s",str);
	
	return 0;
}
void toupper(char *p)
{
	int i;
	while(*(p+i)!='\0')
	{
		if(*(p+i)>='a'||(*(p+i)<='z'))
	{
			*(p+i)=(32 -*(p+i));
    }
		i++;
	}
	
}
