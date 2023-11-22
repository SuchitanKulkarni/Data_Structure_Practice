#include<iostream>
using namespace std;

class number
{
	private :
		int x,y;
		
		public:
			
			void scandata()
			{
				cout<<"enter the data : "<<endl;
				cin>>x>>y;
			}
			number add(number p)
			{
				number q;
				
				q.x  =  x + p.x;
				q.y = y + p.y;
				
				return q;
			}
			
			void show()
			{
				cout<<"x = "<<x<<" y = "<<y;
			}
};

number scandata()
{
	number obj;
	
	obj.scandata();
	
	return obj;
}
int main()
{
	number t1,t2,t3;
	
	t1 = scandata();
	t2.scandata();
	t3 = t1.add(t2);
	t1.show();
	t2.show();
	
	return 0;
}
