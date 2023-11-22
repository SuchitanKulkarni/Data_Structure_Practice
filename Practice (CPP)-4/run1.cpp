#include<iostream>
using namespace std;

class number
{
	public:
		void show()
		{
			cout<<"in show"<<endl;
		}
		
		void show(int a)
		{
			cout<<"in show(int a)"<<endl;
		}
};

int main()
{
	number obj;
	
	obj.show(10);
	
	number *p;
	
	p = new number();
	
	p->show();
	return 0;
}
