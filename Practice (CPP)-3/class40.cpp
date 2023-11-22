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
	number obj;
	obj.x = 10;
	
	cout<<"x = "<<obj.x;
}

int main()
{
	number :: show();
	
	return 0;
}
