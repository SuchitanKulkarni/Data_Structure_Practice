/* 5.scan a string from user.Replace every occurance od a or A by x */

#include<stdio.h>
int main()
{
	char str[100];
	puts("\nENter the string :");
	gets(str);
	
	int i;
	
	while(str[i]!='\0')
	{
		if(str[i]=='a' || str[i]=='A')
		{
			str[i]='x';
		}
		
		i++;
	}
	printf("%s",str);
	
	return 0;
}
