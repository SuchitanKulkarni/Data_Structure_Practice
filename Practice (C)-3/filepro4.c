#include<stdio.h>
int main()
{
	char path[] = "D:\\myfolder\\inner\\source.txt";
	
	FILE *fp;
	
	fp = fopen(path,"r");
	
	char str[100];
	
	fgets(str,99,fp);
	
	printf("%s",str);
	
	return 0;
}
