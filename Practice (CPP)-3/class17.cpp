#include<iostream>
using namespace std;

class number
{
	public:
		int x,y;
		
		void show();
		
		void copy(number temp)
		{
			x = temp.x;
			y = temp.y;
		}
};

int main()
{
	number T1,T2,T3;
	T1.x = 5;
	T1.y = 7;
	
	T2.copy(T1);
	T2.show();
	
	return 0;
}

void number :: show()
{
	cout<<" x = "<<x<<" y = "<< y;
}
