#include<iostream>
using namespace std;

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
	parent obj;
	child var;
	
	p = &obj;
	p->show();
	
	p = &var;
	
	p->show();
	
	
	return 0;
	
}
