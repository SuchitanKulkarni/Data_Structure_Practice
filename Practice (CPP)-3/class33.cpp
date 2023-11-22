#include<iostream>
using namespace std;

class Distance
{
	private :
		int km,mtr;
		void convert();
		
	public:
		void scandata();
		void showdata();
		
};

void Distance :: convert()
{
	int total = km*1000+mtr;
	
	cout<<"total = "<<total;
}
void Distance :: scandata()
{
	cout<<"enter the distance : "<<endl;
	cin>>km>>mtr;
	
	convert();
}

void Distance :: showdata()
{
	cout<<"km = "<<km<<" "<<"mtr = "<<mtr;
}

int main()
{
	Distance t1;
	
	t1.scandata();
	t1.showdata();
	
	return 0;
}
