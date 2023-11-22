#include<iostream>
using namespace std;
#define size 10
int n;
template<class T>
void sel(T A[size])
{
	int i,j,min;
	T temp;
	
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(A[j]<A[min])
			{
				min=j;
			}
		}
		temp=A[i];
		A[i]=A[min];
		A[min]=temp;
		
	 } 
	 cout<<"Sorted array is :";
	 for(i=0;i<n;i++)
	 {
	 	cout<<A[i]<<endl;
	 }
}
int main()
{
	int choice;
	char c[size];
	int A[size];
	float B[size];
	
	int i;
	
	do
	{
		cout<<"-----------MENU----------------";
		cout<<"\n1.Integer";
		cout<<"\n2.Float";
		cout<<"\n3.Exit";
		cout<<"\nEnter your choice";
		cin>>choice;
		switch(choice)
		{
			case 1 : cout<<"Enter the total number of integer elements";
			         cin>>n;
			         cout<<"\nenter the integer element";
			         for (i=0;i<n;i++)
			         {
			         	cin>>A[i];
					 }
					 sel(A);
					 break;
			case 2 : cout<<"Enter the total number of float elements";
			         cin>>n;
			         cout<<"enter the float elements";
			         for(i=0;i<n;i++)
			         {
			         	cin>>B[i];
			        
					 }
					 sel(B);
					 break;
			case 3: cout<<"Program is successfully completed";
			        exit(0);
			        
			default : cout<<"Wrong input";
			          exit(1);
		}
	}while(choice!=3);
}
