/* scan two string from user. check if they are equal or not.if they are not equal swap them. */

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100];
    char str2[100];
    char str3[100];
    puts("\nEnter the first string :");
    gets(str1);
    puts("\nEnter the second string :");
    gets(str2);
    
    if(strcmp(str1,str2)==0)
    {
    	printf("Equal");
	}
	else
	{
		if(strcmp(str1,str2)!=0)
		{
			strcpy(str3,str1);
			strcpy(str1,str2);
			strcpy(str2,str3);
		}
	}
	
	printf("%s - %s",str1,str2);
}
