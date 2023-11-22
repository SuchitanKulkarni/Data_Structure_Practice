#include<iostream>
using namespace std;

class number
{
	public:
		int x;
		static int y;
		
		void set()
		{
			x = 1;
			y = 1;
		}
		void change()
		{
			x++;
			y++;
		}
		void show()
		{
			cout<<" x = "<<x<<" y = "<<y;
		}
};

int number :: y ;

int main()
{
	number t1,t2,t3;
	
	t1.set();
	t2.set();
	t3.set();
	
	t1.change();
	t1.show();
	
	t2.change();
	t2.show();
	
	t3.change();
	t3.show();
	
	return 0;
}
