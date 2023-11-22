#include<iostream>
using namespace std;

int main()
{

	
while(1)
{
		int n,k,i,sum=0;
		cout<<"\nEnter the array value : "<<endl;
	cin>>n;
	
	int num[n];
	
	cout<<"Enter the k value : "<<endl;
	cin>>k;
	
	int c = -1;
	
   for( i = 0;i<n;i++)
     {
    	sum++;
     }
   cout<<"num["<<n<<"] , k = "<<k;

	
	if(k==sum)
	{
		cout<<" output = "<<k;
	}
	else
	{
		cout<<" output = "<<c<<endl;
	}
	
	int x;
	cout<<"\n\nDo you want too continue (0 for no) : "<<endl;
	cin>>x;
	
	if(x == 0)
	{
		return 0;
	}
}
}

