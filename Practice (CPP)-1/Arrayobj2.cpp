#include<iostream>
using namespace std;

class number
{
	public :
		int x,y;
};

int main()
{
	number obj[4];
	
	obj[0].x = 13;
	obj[2].y = 24;
	
	int i;
	
	for(i=0;i<4;i++)
	{
		cout<<"enter the data : "<<endl;
		cin>>obj[i].x;
		cin>>obj[i].y;
	}
	
	for(i=0;i<4;i++)
	{
		cout<<" x = "<<obj[i].x<<" y = "<<obj[i].y<<endl;
	}
}
