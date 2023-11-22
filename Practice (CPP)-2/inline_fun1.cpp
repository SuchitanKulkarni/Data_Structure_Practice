#include<iostream>
using namespace std;

inline void myfun();

int main()
{
    myfun();
	myfun();
	myfun();	
}
inline void myfun()
{
	cout<<"Hello"<<endl;
}
