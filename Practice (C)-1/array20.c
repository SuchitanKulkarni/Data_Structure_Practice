/* 7.scan a string from user. count numbers of vowels present in string*/

#include<stdio.h>
int main()
{
	char str[100];
	puts("\nEnter the string :");
	gets(str);
	
	int i,count=0;
	
	while(str[i]!='\0')
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			count++;
		}
		
		i++;
	}
	
	printf("\nCount = %d",count);
	
	return 0;
}
