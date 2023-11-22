#include<iostream>
using namespace std;

class number
{
	public:
		
		int*p;
		void scan()
		{
			cout<<"enter the value :"<<endl;
			p = new int[1];
			cin>>*(p+0);
		}
		void show()
		{
			cout<<"values = "<<*(p+0);
		}
};

int main()
{
	number obj;
	obj.scan();
	obj.show();
	
	return 0;
}
