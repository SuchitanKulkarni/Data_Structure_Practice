#include<iostream>
using namespace std;

class number 
{
    public:
	  int x,y;
	  	
	  	void show()
	  	{
	  		cout<<" x = "<<x<<" y = "<<y;
		  }  
};

number getobject()
{
	number obj;
	cout<<" enter the data : "<<endl;
	cin>>obj.x>>obj.y;
	
	return obj;
}

int main()
{
	number t1,t2,t3;
	
	t1 = getobject();
	t1.show();
	
	t2 = getobject();
	t2.show();
	
	return 0;
}

