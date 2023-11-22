#include<stdio.h>
#include<stdlib.h>
int main()
{
	char path[]= "D:\\myfolder\\inner\\source.txt";
	
	FILE *fp;
	
	fp = fopen(path,"r");
	
	if(fp==NULL)
	{
		puts("file not connected");
		
		exit(6);
	}
	puts("File is connected");
	
}
