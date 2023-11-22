#include<iostream>
using namespace std;

class number;

class digit
{
	int d;
	
	public:
		
		void scandata(number &p);
		void printdata(number p);
};

class number
{
	private :
		int n;
		
		friend void digit :: scandata(number &p);
		friend void digit :: printdata(number p);
};


void digit :: scandata (number & p)
{
	cout<<"enter the data :"<<endl;
	cin>>d>>p.n;
}
void digit :: printdata(number p)
{
	cout<<" number = "<<p.n<<"  digit = "<<d<<endl;
}

int main()
{
	digit d;
	number num;
	d.scandata(num);
	d.printdata(num);
	
	return 0;
}
