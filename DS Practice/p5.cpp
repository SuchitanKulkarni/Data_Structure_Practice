#include<iostream>
using namespace std;

class number
{
	public:
		int x;
		int *p;
		
	number()
	{
		x = 0;
		p = NULL;
	}
};

int main()
{
	number obj;
	
	number * ptr;
	
	ptr = &obj;
	
	ptr -> x = 89;
	
	cout<<" x = "<<ptr->x<<endl;
	
	ptr->p = &ptr->x;
	
	*(ptr->p) = 90;
	
	cout<<"x = "<<*(ptr->p);
}
