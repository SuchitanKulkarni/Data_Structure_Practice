#include<iostream>
using namespace std;

class number
{
	public:
		
		int x , y;
		
		
};

ostream& operator << (ostream & dout,number p)
{
	cout<<" x = "<<p.x<<" y = "<<p.y;
	
	return dout;
}

istream& operator >> (istream & din,number & p)
{
	cout<<"enter the values : "<<endl;
	cin>>p.x>>p.y;
	
	return din;
 } 
 
 int main()
 {
 	number T1,T2;
 	
 	cin>>T1>>T2;
 	cout<<T1<<T2;
 	
 	return 0;
 }
