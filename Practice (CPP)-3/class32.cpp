#include<iostream>
using namespace std;

class number
{
	private:
		
		int x,y;
		
	   void scandata()
	   {
	   	 cout<<"enter the data : "<<endl;
	   	 cin>>x>>y;
	   }
	   
	public:
		void showdata()
		{
			scandata();
			cout<<x<<" "<<y;
		}
};

int main()
{
	number t1;
	
	t1.showdata();
	
	return 0;
}
