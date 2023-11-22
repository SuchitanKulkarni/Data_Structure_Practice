#include<iostream>
using namespace std;

class dist
{
	private : 
	int km,mtr;
	
	public :
		void scan(int a,int b);
		void print();
		void convert();
		
};

void dist :: scan(int a,int b)
{
	km = a;
	mtr = b;
}
void dist :: print()
{
	cout<<"kx = "<<km<<"mtr = "<<mtr;
}
void dist :: convert()
{
	km = km+mtr/1000;
	mtr = mtr%1000;
}

int main()
{
	dist d1;
	int a,b;
	cout<<"enter the values : "<<endl;
	cin>>a>>b;
	d1.scan(a,b);
	d1.convert();
	d1.print();
	
	return 0;
}
