#include<iostream>
using namespace std;

class number
{
	public:
		int x,y;
		
	void scan()
	{
		cout<<"Enter the vakue x and y : "<<endl;
		cin>>x>>y;
	}
	number operator +(number temp)
	{
		number ans;
		
		ans.x = x +temp.x;
		ans.y = y +temp.y;
		
		return ans;
	}
	
};
int main()
{
	number T1 = {2,3};
	number T2 = {4,6};
	number T3;
	
	T3 = T1 + T2;
	
	cout<<"T3.x  = "<<T3.x<<"  T3.y = "<<T3.y<<endl;
	
	return 0;
}
