

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20];
	char str2[20];
	char str3[20];
	int i;
	char str4[20]="pune";
	puts("\nEnter the first city name :");
	gets(str1);
	puts("\nEnter the second city name :");
	gets(str2);
	puts("\nEnter the third city name :");
	gets(str3);
	
	if(strcmp(str1,str4)==0)
	{
		printf("Pune is present in first string");
	}
	if(strcmp(str2,str4)==0)
	{
		printf("\npune is present in second string");
	}
	if(strcmp(str3,str4)==0)
	{
		printf("\npune is on third string");
	}
	
	return 0;
}
