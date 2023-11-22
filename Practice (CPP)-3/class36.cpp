#include<iostream>
using namespace std;

class number 
{
	public :
		int x;
		static int y;
		
		void set()
		{
			x = 1;
			y = 1;
		}
		
		void show()
		{
			int y = 10;
			
			cout<<" y = "<<y;
			
			cout<<"y = "<<number::y;
		}
};

int main()
{
	number t1,t2,t3;
	t1.set();
	t1.show();
	
	return 0;
}
