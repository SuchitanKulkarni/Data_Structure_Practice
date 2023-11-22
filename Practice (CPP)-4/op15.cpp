#include<iostream>
using namespace std;

class number
{
	public:
		
		int x,y;
		
		void show()
		{
			cout<<"x = "<<x<<" y = "<<y<<endl;
		}
 };
 
 number operator + (int a,number p )
 {
 	number ans;
 	
 	ans.x = a + p.x;
 	ans.y = a + p.y;
 	
 	return ans;
 }
 int main()
 {
 	number T1 = {2,3};
 	number T2;
 	
 	T2 = 5 + T1;
 	
 	T1.show(); 	
	T2.show();
	
	return 0;
  } 
 
