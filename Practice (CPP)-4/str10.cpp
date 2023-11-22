/* scan two integer from user,swap them */

#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter the values of a and b : "<<endl;
	cin>>a>>b;
	
	c = a;
	a = b;
	b = c;
	
	cout<<"a = "<<a<<"b = "<<b;
	
	return 0;
}
