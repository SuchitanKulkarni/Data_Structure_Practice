#include<iostream>
using namespace std;

class number
{
	public :
		int x,y;
		
		void show()
		{
			cout<<" x = "<<x<<" y = "<<y;
		}
};

number getobject()
{
	number obj;
	obj.x = 29;
	obj.y = 68;
	
	return obj;
}
int main()
{
	number t1,t2,t3;
	
	t1.x = 5;
	t1.y = 7;
	
	t2 = getobject();
	t2.show();
	
	return 0;
}
