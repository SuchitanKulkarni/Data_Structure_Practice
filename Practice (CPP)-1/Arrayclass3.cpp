#include<iostream>
using namespace std;

class number
{
	public:
		int num[3];
		
		void scan()
		{
			cout<<"enter the 3 integers : "<<endl;
			int i;
			for(i=0;i<3;i++)
			{
				cin>>num[i];
			}
		}
};

int main()
{
	number obj;
	
	int i ;
	
	obj.scan();
	
	for(i=0;i<3;i++)
	{
		cout<<obj.num[i]<<endl;
	}
	
	return 0;
}
