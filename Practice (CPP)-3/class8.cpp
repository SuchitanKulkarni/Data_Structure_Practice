#include<iostream>
using namespace std;

class Distance
{
	private :
		int km,mtr;
		
	public : 
	      void scan()
	      {
	      	cout<<"Enter the distance (km and mtr ) : "<<endl;
	      	cin>>km>>mtr;
		  }
		  void calcu()
		  {
		  	int total = km*1000 + mtr;
		  	cout<<"Total = "<<total<<endl;
		  }
		  
};

int main()
{
	Distance D1,D2;
	D1.scan();
	D1.calcu();
	D2.scan();
	D2.calcu();
	
	return 0;
}
