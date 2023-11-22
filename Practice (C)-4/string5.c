/* sacn a string from user . define replace () to replace every occurence of space by ? */

#include<stdio.h>
void replace(char *p);

int main()
{
	char str[100];
	puts("\nEnter the string :");
	gets(str);
	
	printf("\n%s",str);
	
	replace(str);
	
	printf("\n%s",str);
	
	return 0;
}
void replace(char *p)
{
	int i;
	
	while(*(p+i)!='\0')
	{
		if(*(p+i)==' ')
		{
			*(p+i)='?';
		}
		
		i++;
	}
}
