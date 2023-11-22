#include<iostream>
using namespace std;

class parent
{
	public:
		
		int *age;
		
		parent()
		{
			cout<<"age is :  "<<endl;
			age = new int[1];
			cin>>*age;
		}
		~parent()
		{
			cout<<*age;
			delete age;
		}
};

class child : public parent
{
	public :
		char * name;
		
		child()
		{
			cout<<"enter the name : "<<endl;
			name = new char[90];
			cin.getline(name,90);
			
		}
		~child()
		{
			cout<<name;
			delete [] name;
		}
};

int main()
{
	parent* obj;
	
	obj = new child();
	delete obj;
	
	return 0;
}
