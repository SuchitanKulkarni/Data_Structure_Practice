/* 4.scan a string from user.count captial alphabets and lower alphabets.*/


#include<stdio.h>
int main()
{
	char str[100];
	puts("\nEnter the string :");
	gets(str);
	
	int i,count1=0,count2=0;
	
	while(str[i]!='\0')
	{
		if(str[i]>='A'&& str[i]<='Z')
		{
			count1++;
		}
		if(str[i]>='a'&& str[i]<='z')
		{
			count2++;
		}
		i++;
	}
	printf("\nCount1 = %d",count1);
	printf("\nCount2 = %d",count2);
	
	return 0;
}

