#include<iostream>
using namespace std;


class number
{
	
	public:
		int x,y;
		
	number()
	{
		
		cout<<"\nobject created ";
	}
	~number()
	{
		cout<<"\ndescturctor "<<x;
	}
	
};

int main()
{

  number *p;
  p = new number[3];
  int i;
  for(i=0;i<3;i++)
  {
  	cout<<"enter the x and y : "<<endl;
  	cin>>(p+i)->x>>(p+i)->y;
  }
  
  for(i=0;i<3;i++)
  {
  	cout<<(p+i)->x<<" "<<(p+i)->y<<endl;
  }
	cout<<"\nafter main";
	return 0;
}
