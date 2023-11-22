#include<iostream>
using namespace std;

class node
{
	int x;
	void getdata()
	{
		x=0;
		y=0;
		change();
	}
	
	public:
		int y;
		void putdata(node &);
		void change()
		{
			x = 5;
		}
		
};

void node :: putdata(node & T)
{
	T.getdata();
	
	cout<<x<<y;
}
int main()
{
	node obj,var;
	obj.putdata(obj);
}
