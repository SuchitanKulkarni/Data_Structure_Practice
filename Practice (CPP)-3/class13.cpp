#include<iostream>
using namespace std;

class dist
{
	int km,mtr;
	
	public:
		void scan()
		{
			cout<<"Enter the distance : "<<endl;
			cin>>km>>mtr;
		}
		int convert()
		{
			int total = km*1000 +mtr;
			
			return total;
		}
};

int main()
{
	dist d1,d2;
	
	d1.scan();
	d2.scan();
	int t1,t2;
	
	t1 = d1.convert();
	t2 = d2.convert();
	
	if(t1>t2)
	{
		cout<<"Distance 1 is greater "<<endl;
	}
	else
	{
		cout<<"Distance 2 is greater "<<endl;
	}
	
	return 0;
}
