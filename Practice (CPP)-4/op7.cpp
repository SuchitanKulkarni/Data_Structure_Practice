#include<iostream>
using namespace std;

class number
{
	public:
		int x,y;
		
		number operator + (number temp)
		{
			number ans;
			
			ans.x = x + temp.x;
			ans.y = y + temp.y;
			
			return ans;
		}
		
		void show()
		{
			cout<<" x = "<<x<<" y = "<<y<<endl;
		}
};
int main()
{
	number T1 = {2,3};
	number T2 = {6,9};
	number T3;
	
	T3 = T1 + T2;
	
	T3.show();
	
	return 0;
}
