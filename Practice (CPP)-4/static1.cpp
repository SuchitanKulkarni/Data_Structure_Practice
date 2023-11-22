#include<iostream>
using namespace std;

class number
{
	public:
		
		static int y ;
		
		static void set()
		{
			cout<<" y = "<<y;
		}
};

int number :: y = 90;

int main()
{
	number obj;
	
	obj.set();
	
	return 0;
}
