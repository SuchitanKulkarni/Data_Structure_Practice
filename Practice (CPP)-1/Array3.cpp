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
		
		void replace()
		{
			int i;
			
			for(i=0;i<5;i++)
			{
				if(num[i]==10)
				{
					num[i]=100;
				}
			}
		}
		
		void print()
		{
			int i;
			for(i=0;i<5;i++)
			{
				cout<<num[i]<<" ";
			}
		}
};

int main()
{
	number t1,t2,t3;
	t1.scan();
	t2.scan();
	t3.scan();
	
	t1.replace();
	t2.replace();
	t3.replace();
	
	t1.print();
	t2.print();
	t3.print();
	
	return 0;
}
