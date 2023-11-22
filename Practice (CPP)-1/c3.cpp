#include<iostream>
using namespace std;

class number
{
	public:
		int x,y;
		
		number();
		
		number(int a, int b)
		{
			cout<<"\nIn parametrized";
		}
		
};

class digit
{
	int d;
	void show()
	{
		cout<<"\nin show";
	}
	friend number::number();
};

number::number()
{
	cout<<"\nin default ";
	digit temp;
	temp.d = 10;
	temp.show();
}

int main()
{
	number obj;
	
	return 0;
}
