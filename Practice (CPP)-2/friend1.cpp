#include<iostream>
using namespace std;
class digit;
class number
{
	int n;
	friend void scandata(number &p,digit &q);
	friend void printdata(number p,digit q);
};

class digit
{
	int d;
	
	friend void scandata(number &p,digit &q);
	friend void printdata(number p,digit q);
};

void scandata(number &p,digit &q)
{
	cout<<"enter the 2 datas :"<<endl;
	cin>>p.n>>q.d;
}

void printdata(number p,digit q)
{
	cout<<"number = "<<p.n<<"  digit = "<<q.d;
}

int main()
{
	number obj1;
	digit obj2;
	
	scandata(obj1,obj2);
	printdata(obj1,obj2);
	
	return 0;
}


