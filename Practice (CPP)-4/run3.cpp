#include<iostream>
using namespace std;

class parent
{
	public:
		
		virtual void show()
		{
			cout<<"in parent  show"<<endl;
		}
};

class child : public parent
{
	public:
		
		void show()
		{
			cout<<"in child show"<<endl;
		}
};

int main()
{
	parent * p;
	
	p = new parent();
	
	p->show();
	
	p = new child();
	
	p->show();
	
	return 0;
	
}
