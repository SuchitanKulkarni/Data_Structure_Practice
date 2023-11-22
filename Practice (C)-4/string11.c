/* scan two string from user. swap them */

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100]="hello";
	char str2[100]="world";
	char str3[100];
	
	puts(str1);
	puts(str2);
	
	strcpy(str3,str1);
	strcpy(str1,str2);
	strcpy(str2,str3);
	
	printf("string 1 = %s",str1);
	printf("string 2 = %s",str2);
	
	return 0;
}
