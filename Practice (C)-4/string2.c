/* scan the string from user.count number of words using pointer notation.*/


#include<stdio.h>
int main()
{
	char str[100];
	char *p;
	p =str;
	
	puts("\nENter the string :");
	gets(p);
	
	int i,count =0;
	
	while(*(p+i)!='\0')
	{
		if(*(p+i)==' ')
		{
		  count++;
		}
		i++;
	}
	
	printf("\nCount words = %d",count+1);
	
	return 0;
}

