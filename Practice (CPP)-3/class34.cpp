#include<iostream>
using namespace std;

class number
{
	public:
		int x;
		static int y;
};

int number :: y = 5;

int main()
{
	number t1,t2,t3;
	
	cout<<number ::y;
	
	return 0;
}
