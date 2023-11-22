#include<iostream>
using namespace std;

class digit
{
	int b;
	friend class number;
};

class number
{
	void show()
	{
		digit temp;
		cout<<"enter the digit : "<<endl;
		cin>>temp.b;
		cout<<temp.b;
	}
	friend int main();
};

int main()
{
	number obj;
	
	obj.show();
	
	return 0;
}
