#include<iostream>
using namespace std ;

class number 
{
	public :
		int x,y;
		
		void scan()
		{
			int a,b;
			cout<<"Enter the values :"<<endl;
			cin>>a>>b;
			x = a;
			y = b;
		}
		void show()
		{
			cout<<"x = "<<x<<"  y = "<<y;
		}
		
};

int main()
{
	number obj;
	obj.scan();
	obj.show();
	
	return 0;
}
