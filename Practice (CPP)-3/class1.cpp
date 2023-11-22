# include<iostream>
using namespace std;

class number
{
	public:
		int x,y;
};

int main()
{
	number t1,t2,t3;
	
	cout<<"enter the values x and y :"<<endl;
	cin>>t1.x>>t1.y;
	
	cout<<"enter the values x and y :"<<endl;
	cin>>t2.x>>t2.y;
	
	t3.x = t1.x+t2.x;
	t3.y = t1.y+t2.y;
	
	cout<<t3.x<<endl;
	cout<<t3.y;
	
	return 0;
}
