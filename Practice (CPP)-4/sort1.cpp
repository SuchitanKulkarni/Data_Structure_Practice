/* scan and array of 6 integers from user and sort it in acending order */

#include<iostream>
using namespace std;

int main()
{
	int num[6];
	int i,j,temp;
	cout<<"enter the 6 integers : "<<endl;
	for(i=0;i<6;i++)
	{
		cin>>num[i];
	}
	
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(num[i]>num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	cout<<"after sorting : ";
	for(i=0;i<6;i++)
	{
		cout<<num[i]<<" ";
	}
}
