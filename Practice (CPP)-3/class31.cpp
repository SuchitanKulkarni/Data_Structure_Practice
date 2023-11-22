#include<iostream>
using namespace std;

class number
{
	public :
		int x,y;
		
		void show(number var)
		{
			display();
			var.display();
		}
		void display()
		{
			cout<<" in display = "<<x<<" "<<y;
		}
};

int main()
{
	number t1,t2,t3;
	
	t1.x = 73;
	t1.y = 67;
	t2.x = 60;
	t2.y = 89;
	
	t1.show(t2);
	
	return 0;
}
