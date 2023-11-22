#include<iostream>
using namespace std;

class number
{
	public :
		int x,y;
		
		void scan()
		{
			cout<<"ENter the data : "<<endl;
			cin>>x>>y;
		}
		
		void show()
		{
			cout<<" x = "<<x<<" y = "<<y;
		}
		
		void add(number p1,number &p2)
		{
			p2.x = p1.x + x;
			p2.y = p1.y + y;
		 } 
		 
};

int main()
{
	number t1,t2,t3;
	
	t1.scan();
	t2.scan();
	t1.add(t2,t3);
	
	t3.show();
	
	return 0;
}
