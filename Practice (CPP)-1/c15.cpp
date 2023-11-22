#include<iostream>
using namespace std;

int main()
{
	int *p;
	
	p =new int [2];
	
	cout<<"enter the two values : "<<endl;
	cin>>*(p+0)>>*(p+1);
	
	cout<<"addition = "<<*(p+0)+*(p+1); 
	
	return 0;
}
