#include<iostream>
using namespace std;

class digit
{
	void print();
	
	public:
		
		void disp()
		{
			print();
			
			cout<<"\n in print "<<endl;
		}
};

class number
{
	int n;
	
	friend class digit;
};

void digit:: print()
{
	cout<<"\n in print () ";
	number obj;
	obj.n = 20;
	
	cout<<"\n obj.n = "<<obj.n;
}

int main()
{
	digit d;
	
	d.disp();
	
	return 0;
}
