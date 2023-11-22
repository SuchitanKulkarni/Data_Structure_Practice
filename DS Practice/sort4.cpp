//Heap sort

#include<iostream>
using namespace std;

void downadjustment(int *num,int i);

int main()
{
	int *num,n;
	int i,k,last,temp;
	cout<<"enter the total number of elements : "<<endl;
	cin>>n;
	
	num = new int[n+1];
	
	num[0] = n;
	
	cout<<"Enter the "<<n<<" number of data : "<<endl;
	
	for(i=1;i<n+1;i++)
	{
		cin>>num[i];
	}
	
	for(k = num[0]/2;k>=1;k--)
	{
		downadjustment(num,k);
	}
	
	while(num[0]>=1)
	{
		last = num[0];
		temp = num[last];
		num[last] = num[1];
		num[1] = temp;
		num[0] --;
		
		downadjustment(num,1);
	}
	
	num[0] = n;
	
	for(i = 1;i<n+1;i++)
	{
		cout<<num[i]<<" ";
	}
	
}

void downadjustment(int*num,int i)
{
	int j,n,temp;
	
	n = num[0];
	
	while(2*i<=n)
	{
		j = 2*i;
		
		if(j+1<=n && num[j+1] >num[j])
		{
			j = j+1;
		}
		
		if(num[i]<num[j])
		{
			temp = num[i];
			num[i] = num[j];
			num[j] = temp;
			
			i = j;
		}
		else
		{
			break;
		}
	}
}
