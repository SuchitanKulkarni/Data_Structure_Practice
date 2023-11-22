#include<iostream>
using namespace std;


class number
{
	
	public:
		int x,y;
		
	number()
	{
		
		cout<<"\nobject created "<<x;
	}
	~number()
	{
		cout<<"\ndescturctor "<<x;
	}
	
};

int main()
{
     {
     	number * p;
     	p = new number[3];
     	
     	(p+0)->x = 10;
     	(p+1)->x = 20;
     	(p+2)->x = 30;
     	
     	delete[] p;
	  } 
	cout<<"\nafter main";
	return 0;
}
