#include<stdio.h>
#include<stdlib.h>

int main()
{
	char path [] = "D:\\myfolder\\inner\\source.txt";
	
	FILE *fp;
	
	fp = fopen(path,"r");
	
	if(fp==NULL)
	{
		puts("not connected");
		exit(5);
	}
	
	char str[10];
	int count = 0;
	
	while(fgets(str,10,fp)!=NULL)
	{
		count++;
	}
	
	printf("Count = %d",count);
	
	return 0;
	
	
}
