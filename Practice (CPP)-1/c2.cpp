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
		static void show()
		{
		number obj;
	    number var(4,9);
	
		}
		
};

int main()
{
	number::show();
	
	return 0;
}
