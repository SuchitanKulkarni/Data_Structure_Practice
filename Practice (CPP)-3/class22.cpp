#include<iostream>
using namespace std;

class number 
{
	public:
		int x,y;
		
		void add(number p1,number &p2)
		{
			p2.x = p1.x +x;
			p2.y = p1.y + y;
		}
		
		void show()
		{
			cout<<" x = "<<x<<" y = "<<y;
		}
};

int main()
{
	number t1,t2,t3;
	
	t1.x = 20;
	t1.y = 60;
	t2.x = 25;
	t2.y = 24;
	
	t1.add(t1,t3);
	
	t3.show();
	
	return 0;
}
