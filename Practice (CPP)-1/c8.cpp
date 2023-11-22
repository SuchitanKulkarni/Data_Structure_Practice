#include<iostream>
using namespace std;

class number
{
	
	public:
		int x,y;
		
	number()
	{
		cout<<"int default";
	}
	~number()
	{
		cout<<"\ndescturctor";
	}
	
};

int main()
{
	{
		number obj;
	}
	cout<<"\nafter main()";
	
	return 0;
}
