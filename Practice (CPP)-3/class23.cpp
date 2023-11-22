#include<iostream>
using namespace std;

class number
{
	public:
		int x,y;
		
		void show()
		{
			cout<<" x = "<<x<<" y = "<<y;
		}
		
	
		
};

	void add(number p1,number p2,number &p3)
		{
			p3.x = p1.x + p2.x;
			p3.y = p1.y + p2.y ;
		}
		
		
int main()
{
	number t1,t2,t3;
	
	t1.x = 29;
	t1.y = 56;
	t2.x = 58;
	t2.y = 68;
	
	add(t1,t2,t3);
	
	t3.show();
	
	return 0;
}
