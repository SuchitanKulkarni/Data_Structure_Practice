#include<iostream>
using namespace std;

class Number
{
	private :
		int x,y;
		
		public:
			
			void scan()
			{
				cout<<"enter the data : "<<endl;
				cin>>x>>y;
			}
			void print()
			{
				cout<<" x = "<<x<<" y = "<<y<<endl;
			}
};

int main()
{
	Number obj[5];
	
	int i;
	
	for(i=0;i<5;i++)
	{
		obj[i].scan();
	}
	
	for(i=0;i<5;i++)
	{
		obj[i].print();
	}
	
	return 0;
}
