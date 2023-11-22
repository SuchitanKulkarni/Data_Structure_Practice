#include<iostream>
using namespace std;

void myfun(int x)
{
	myfun(x+1);
	cout<<"hello";
}

int main()
{
	myfun(1);
	
	return 0;
}

