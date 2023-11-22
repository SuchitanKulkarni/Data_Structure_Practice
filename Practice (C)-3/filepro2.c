#include<stdio.h>
int main()
{
	char path[]="D:\\myfolder\\inner\\source.txt";
	
	FILE*fp;
	
	fp = fopen(path,"r");
	
	char ch;
	
	while(1)
	{
		ch = getc(fp);
		
		if(ch==EOF)
		{
			break;
		}
		printf("\n%c",ch);
	}
	
	return 0;
}
