#include<iostream>
using namespace std;


int main()
{
	int a,b,c;
	
	a = 5;
	b = 10;
	c = 20;
	
	int *ptr[3];
	
	ptr[0] = &a;
	ptr[1] = &b;
	ptr[2] = &c;
	
	int i;
	
	for(i=0;i<3;i++)
	{
		cout<<*ptr[i]<<"   ";
	}
	
	cout<<endl<<endl;
	
	cout<<"a = *ptr[0] = "<<*ptr[0]<<endl;
	cout<<"b = *ptr[1] = "<<*ptr[1]<<endl;
	cout<<"c = *ptr[2] = "<<*ptr[2]<<endl;
	
	cout<<endl;
	
	cout<<(long long)&a<<"  "<<(long long)ptr[0]<<endl;
	cout<<(long long)&b<<"  "<<(long long)ptr[1]<<endl;
	cout<<(long long)&c<<"  "<<(long long)ptr[2]<<endl;
	
	return 0;
	
}
