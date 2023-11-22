#include<iostream>
using namespace std;

class number
{
	public:
		int x,y;
		
		void scan()
		{
			cout<<" enter the data : "<<endl;
			cin>>x>>y;
		}
		
		void add(number p1,number p2)
		{
			x = p1.x + p2.x;
			y = p1.y + p2.y;
		}
};

number getobject()
{
	number obj;
	cout<<"enter the data : "<<endl;
	cin>>obj.x>>obj.y;
	
	return obj;
}

void show(number p)
{
	cout<<p.x<<"  "<<p.y;	
}
int main()
{
	number t1,t2,t3;
	
	t1.scan();
	t2 = getobject();
	t3.add(t1,t2);
	
	show(t3);
	
	return 0;
	
}
