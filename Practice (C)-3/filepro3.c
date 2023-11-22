
	#include<stdio.h>
int main()
{
	char path[]="D:\\myfolder\\inner\\source.txt";
	int i=0;
	
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
		
		i++;
		
		printf("\n%c",ch);
		
	}
	
	printf(" Count : %d",i);
	return 0;
}
