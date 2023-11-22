#include<stdio.h>
void add(int x);
int sum =0;
int main()
{
	int num[5] = {7,13,8,2,15};
	int i;
	for(i=0;i<5;i++)
	{
		add(num[i]);
	}
	
	printf("\nsum = %d",sum);
	
	return 0;
}
void add(int x)
{
	
	printf("\n%d",x);
	sum = sum +x;

}
