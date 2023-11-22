#include<iostream>
using namespace std;

class number
{
	public:
		
		int x,y;
		
		void scan()
		{
			cout<<"Enter value x and y : "<<endl;
			cin>>x>>y;
		}
		
};
int main()
{
	number T1,T2,T3;
	cout<<"Enter the x and y : "<<endl;
	cin>>T1.x>>T1.y;
	
	int a;
	cout<<"Enter the a :  "<<endl;
	cin>>a;
	
	return 0;
}
