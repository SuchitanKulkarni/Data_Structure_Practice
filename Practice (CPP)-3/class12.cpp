#include<iostream>
using namespace std;

class dist
{
	int km,mtr;
    public:
    	void scan()
		{
			cout<<"ENter the distance :"<<endl;
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
	dist d1;
	int t1;
	d1.scan();
	t1 = d1.convert();
	
	cout<<"total = "<<t1;
	
	return 0;
}
