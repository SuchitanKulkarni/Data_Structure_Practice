/* scan array of 8 fraction from users sort it in acending order .*/

#include<iostream>
using namespace std;

int main()
{
	float num[8];
	int i,j;
	float temp;
	cout<<"enter the 8 floating values : "<<endl;
	for(i=0;i<8;i++)
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
	 
	 for(i=0;i<8;i++)
	 {
	 	cout<<num[i]<<" ";
	 }
	 
	 return 0;
}
