#include<iostream>
using namespace std;

class number 
{
	public:
		int x,y;
		
};

void change(number &ref)
{
	ref.x = 50;
	ref.y = 30; 
}
int main()
{
	number t1,t2;
	
	t1.x = 5;
	t1.y = 7;
	t2.x = 10;
	t2.y = 20;
	
	change(t1);
	
	cout<<"T1.x = "<<t1.x<<" T1.y = "<<t1.y;
	
	return 0;
}
