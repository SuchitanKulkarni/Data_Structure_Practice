#include<iostream>
using namespace std;

class number 
{
	public:
		int x;
		static void show();
		
};

void number :: show()
{
	//cout<<" x  = "<<x; generates error
}

int main()
{
	number::show();
	
	return 0;
}
