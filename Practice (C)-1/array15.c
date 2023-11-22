/* 2.scan a string from user.count the number of words.*/
#include<stdio.h>
int main()
{
	char str[100];
	puts("\nEnter the strings :");
	gets(str);
	
	int i,count =0;
	
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			count++;
		}
		
		i++;
	}
	
	printf("\nCount = %d",count+1);
	
	return 0;
}
