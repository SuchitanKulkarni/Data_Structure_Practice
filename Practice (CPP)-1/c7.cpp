#include<iostream>
using namespace std;

class number
{
	
	public:
		int x,y;
		
	number()
	{
		cout<<"enter the x and y :  ";
		cin>>x>>y;
	}
	number(int a)
	{
		
	}
	
};

int main()
{
	number *p,*q,*r;
	
	p = new number();
	q = new number();
	r =  new number(0);
	
	r->x = p->x + q->x;
	r->y = p->y + q->y;
	
	cout<<p->x<<p->y<<endl;
	cout<<q->x<<q->y<<endl;
	cout<<r->x<<r->y<<endl;
	
	return 0;
}
