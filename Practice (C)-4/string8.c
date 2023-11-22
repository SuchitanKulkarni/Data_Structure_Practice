/* scan two string from user. print their length*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100];
	char str2[100];
	puts("\nEnter the first string :");
	gets(str1);
	puts("\nEnter the second string :");
	gets(str2);
	
	int length1,length2;
	
	length1 = strlen(str1);
	length2 = strlen(str2);
	
	printf("length of first string = %d",length1);
	printf("length of second string = %d",length2);
	
	return 0;
}

