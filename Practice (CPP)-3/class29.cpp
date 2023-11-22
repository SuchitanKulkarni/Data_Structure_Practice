#include<iostream>
using namespace std;

class number
{
	public:
		int x,y;
		
		void scandata()
		{
			cout<<"enter the data : "<<endl;
			cin>>x>>y;
		}
		
		number add(number p)
		{
			number q;
			
			q.x = p.x + x;
			q.y = p.y + y;
			
			return q;
			
		}
		
};


number scandata()
{
	number obj;
	cout<<"enter the data : "<<endl;
	cin>>obj.x>>obj.y;
	
	return obj;
}

void show(number p1,number p2)
{
	cout<<" p1.x = "<<p1.x<<" p1.y = "<<p1.y;
	cout<<" p2.x = "<<p2.x<<" p2.y  =  "<<p2.y;
}

int main()
{
	number t1,t2,t3;
	
	t1 =  scandata();
	t2.scandata();
	t3 = t1.add(t2);
	
	show(t1,t2);
	
	return 0;
}


