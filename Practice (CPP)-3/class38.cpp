#include<iostream>
using namespace std;

class number 
{
	public:
		static void show();
};

void number :: show()
{
	cout<<"in show"<<endl;
}

int main()
{
	number :: show();
	
	return 0;
}
