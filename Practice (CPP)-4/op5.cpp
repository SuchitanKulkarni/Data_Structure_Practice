#include<iostream>
using namespace std;

class number
{
	public:
		int x,y;
		number operator -()
		{
			number ans ;
			
			ans.x = -x;
			ans.y = -y;
			
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
	number T3;
	
	T3 = -T1;
	
	T1.show();
	T3.show();
	
	return 0;
}
