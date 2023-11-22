#include<iostream>
#include<stdlib.h>
#include<time.h>
#define MAX 20
using namespace std;

int partition(int *num,int low,int up)
{
	int pivot,p,q,temp;
	
	pivot = num[low];
	p = low+1;
	q = up;
	
	while(1)
	{
		while(num[p]<=pivot && p<=up)
		{
			p++;
		}
		
		while(num[q] > pivot)
		{
			q--;
		}
		
		if(p<q)
		{
			temp = num[p];
			num[p] = num[q];
			num[q] = temp;
		}
		else
		{
			break;
		}
	}
	
	temp = num[low];
	num[low] = num[q];
	num[q] = temp;
	
	return q;
}

void quicksort(int*num,int low,int up)
{
	int k;
	
	if(low<up)
	{
		k = partition(num,low,up);
		quicksort(num,low,k-1);
		quicksort(num,k+1,up);
	}
}

int main()
{
	int num[MAX];
	
	int i;
	
	for(i=0;i<MAX;i++)
	{
		num[i] = i;
	}
	
	qicksort(num,0,MAX-1);
	
	for(i=0;i<MAX;i++)
	{
		cout<<num[i];
	}
}
