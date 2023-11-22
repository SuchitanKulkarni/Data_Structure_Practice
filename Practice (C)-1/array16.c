/* 3. scan a string from user. copunt only capital alphabets in string .*/

#include<stdio.h>
int main()
{
	char str[100];
	puts("\nEnter the string:");
	gets(str);
	
	int i,count=0;
	
	while(str[i]!='\0')
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			count++;
		}
		i++;
	}
	
	printf("\nCount = %d",count);
	
	return 0;
}
