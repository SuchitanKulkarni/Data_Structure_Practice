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
    number num[3];
    num[0].x = 0;
   num[1].x = 1;
   num[0].x = 2;
	} 
	cout<<"\nafter main";
	return 0;
}
