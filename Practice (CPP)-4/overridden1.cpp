#include<iostream>
using namespace std;

class parent
{
	public:
		
		void show()
		{
			cout<<"in parent show"<<endl;
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
	parent obj;
	
}
