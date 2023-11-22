#include<stdio.h>
void change(char *p,int n);
int main()
{
	char ch[6]={'a','x','v','e','z','X'};
	int i;
	change(ch,6);
	
	for(i=0;i<6;i++)
	{
		printf("%c",ch[i]);
	}
	
	return 0;
}
void change(char *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if((*(p+i)=='x') || (*(p+i)=='X'))
		{
			*(p+i)='a';
		}
	}
}
