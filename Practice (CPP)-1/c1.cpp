#include<iostream>
using namespace std;

class number
{
	int x,y;
	
	number()
	{
		cout<<"int default";
	}
	number(int a,int b)
	{
		cout<<"\nin parameterized";
	}
	public:
		void show()
		{
			cout<<"In show";
		}
		
		friend int main();
};

int main()
{
	number obj;
	number var(4,9);
	
	return 0;
}
