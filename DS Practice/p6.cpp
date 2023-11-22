#include<iostream>
using namespace std;
class Number
{
	public:
		int a;
		Number(int x)
		{
			a = x;
			cout<<"\nparameterized "<<a;
		}
		~Number()
		{
			cout<<"\ndestructor "<<a;
		}
};

void myfun(Number & Temp)
{
	Temp->x = 20;
}

int main()
{
    Number T1(1);
    myfun(&T1);
    cout<<T1.a;
    return 0;
}
