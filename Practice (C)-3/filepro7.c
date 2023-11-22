#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char path1[] = "D:\\myfolder\\inner\\write.txt";
	char path2[] = "D:\\myfolder\\inner\\source.txt";
	
	FILE * fs,*ft;
	
	fs = fopen(path2,"r");
	ft = fopen(path1,"w");
	
	if(fs==NULL || ft==NULL)
	{
		puts("not connected");
	}
	
	puts("Connected");
	
	char str[100];
	
	while(fgets(str,100,fs)!=NULL)
	{
		fputs(str,ft);
	}
	
	
	fclose(ft);
	return 0;
	
}
