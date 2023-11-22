#include<iostream>
using namespace std;

class number
{
	int num[5];
	
	public:
		void scan()
		{
			int i;
			cout<<"enter the 5 integers : "<<endl;
			for(i=0;i<5;i++)
			{
				cin>>num[i];
			}
		}
		
		int search(int x)
		{
			int i;
			for(i=0;i<5;i++)
			{
				if(num[i]==x)
				{
					return 1;
				}
			}
			if(i == 5)
			{
				return 0;
			}
		}
		
};

int main()
{
	number t1,t2,t3;
	t1.scan();
	t2.scan();
	t3.scan();
	
	int x;
	cout<<"enter the value to be searched : "<<endl;
	cin>>x;
	
	if(t1.search(x)==1)
	{
		cout<<"found";
	}
	else if(t2.search(x)==1)
	{
		cout<<"found";
	}
	else if(t3.search(x)==1)
	{
		cout<<"found";
	}
	else
	{
		cout<<"not found";
	}
	
	return 0;
	
}
