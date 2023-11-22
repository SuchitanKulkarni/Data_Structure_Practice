#include<stdio.h>
void operation(int x,int y,int *padd,int *psub);
int main()
{
	int a,b,add,sub;
	puts("\nEnter the two in tegers :");
	scanf("%d%d",&a,&b);
	
	operation(a,b,&add,&sub);
	
	printf("\nAddition = %d		Subtraction = %d",add,sub);
	
	return 0;
}
void operation(int x,int y,int *padd,int *psub)
{
	*padd = x+y;
	*psub = x-y;
}
