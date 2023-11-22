#include<iostream>
using namespace std;

class number
{
	public:
		int x,y;
		
		void add(number p1, number p2)
		{
			x = p1.x +p2.x;
			y = p1.y + p2.y;
		}
		void show()
		{
			cout<<" x = "<<x<<" y = "<<y;
		}
};

int main()
{
	number t1,t2,t3;
	
	t1.x = 5;
	t1.y = 7;
	t2.x = 90;
	t2.y = 58;
	
	t3.add(t1,t2);
	
	t3.show();
	
	return 0;
}
