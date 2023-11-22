#include<stdio.h>
#include<stdlib.h>
int main()
{
	char path[] = "D:\\myfolder\\inner\\source.txt";
	
	FILE *fp;
	
	fp = fopen(path,"r");
	
	if(fp==NULL)
	{
		puts("not connected");
		exit (4);
	}
	
	char ch;
	int count =0;
	
	while(1)
	{
		ch = getc(fp);
		
		if(ch == EOF)
		{
			break;
		}
		
		count ++;
	}
	
	printf("Count = %d",count);
	
	return 0;
}
