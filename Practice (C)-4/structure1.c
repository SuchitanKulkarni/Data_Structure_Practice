#include<stdio.h>
struct number
{
	int x,y;
};
int main()
{
	struct number t1,t2,t3;
	
	puts("\nEnter the data for 1st and 2nd memory :");
	scanf("%d%d%d%d",&t1.x,&t1.y,&t2.x,&t2.y);
	
	t3.x = t1.x+t2.x;
	t3.y = t1.y+t2.y;
	
	printf("%d - %d",t3.x,t3.y);
	
	return 0;
}
