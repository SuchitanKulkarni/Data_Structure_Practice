/* scan a string from user . define function wordcount () to count the words in the string . print back in main(). */

#include<stdio.h>
int wordcount(char *p);

int main()
{
	char str[100];
	puts("\nEnter the string :");
	gets(str);
	int count;
	count = wordcount(str);
	
	printf("\ncount = %d ",count +1);
	
	return 0;
}
int wordcount(char *p)
{
	int i,count=0;
	
	while(*(p+i)!='\0')
	{
		if(*(p+i)==' ')
		{
			count++;
		}
		i++;
	}
	
	return count;
}
