#include<iostream>
using namespace std;


class number
{
	
	public:
		
	number()
	{
		cout<<"int default";
	}
	number(int a,int b)
	{
		cout<<"\nin parameterized";
	}
	
	void show()
	{
		cout<<"/nIn show";
	}
};

int main()
{
	number *p,*q;
	p = new number();
	p->show();
	q = new number(10,20);
	q->show();
	
	return 0;
	return 0;
}
