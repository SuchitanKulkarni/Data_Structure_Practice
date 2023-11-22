#include<iostream>
using namespace std;

class number
{
	public:
		int x,y;
		
		void copy(number &ref)
		{
			ref.x = x;
			ref.y = y;
		}
		
		void show()
		{
			cout<<"x = "<<x<<"y = "<<y;
		}
		
};

int main()
{
	number t1,t2;
	
	t1.x = 5;
	t1.y = 7;
	
	t1.copy(t2);
	t2.show();
	
	return 0;
}
