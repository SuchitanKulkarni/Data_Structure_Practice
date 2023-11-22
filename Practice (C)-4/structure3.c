#include<stdio.h>
typedef struct student
{
	int height;
	float weight;
}student;

int main()
{
	student std[6];
	int i;
	
	puts("Enter the height and weight :");
	for(i=0;i<6;i++)
	{
		scanf("%d%f",&std[i].height,&std[i].weight);
	}
	
	student temp;
	int j;
	for(i=0;i<6;i++)
	{
		for(j=j+1;j<6;j++)
		{
			if(&std[i].height > &std[j].height)
			{
				
				temp = std[i];
				std[i] = std[j];
				std[j] = temp;
			}
		}
	}
	
	for(i=0;i<6;i++)
	{
		printf("%d %f",std[i].height,std[i].weight);
	}
	
	
}
