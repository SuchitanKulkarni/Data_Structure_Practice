#include<iostream>
using namespace std;

void add(int a)
{
	cout<<"\n1.int";
}
void add(int a, int b)
{
	cout<<"\n2.int";
}
void add(float a,float b)
{
	cout<<"\n3.float";
}

int main()
{
	add('A');
	add((int)3.5,(int)3.4);
	add(2,6);
	add((float)3.5,(float)8.7);
	
	return 0;
}

