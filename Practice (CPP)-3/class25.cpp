#include<iostream>
using namespace std;

class number
{
	public:
		int x,y;
		
		void add(number p1,number p2)
		{
			x = p1.x + p2.x;
			y = p1.y + p2.y;
		}
		
};

void scan(number &p1)
{
	cout<<"Enter the data : "<<endl;
	cin>>p1.x>>p1.y;
}
void show(number p)
{
	cout<<"x = "<<p.x<<" y = "<<p.y;
}

int main()
{
	number t1,t2,t3;
	
	scan(t1);
	scan(t2);
	t3.add(t1,t2);
	
	show(t3);
	
	return 0;
}
