#include<iostream>
using namespace std;

void commonfun(int *p,int row,int col)
{
	int i;
	
	for(i=0;i<=row*col-1;i++)
	{
		
		if(i!=0 || i%col-1 ==  0)
		{
			cout<<" \n ";  
		}
		
		cout<<*(p+i)<<" ";
	}
}

int main()
{
	int num[3][3] = {4,64,23,4,6,5,12,4,87};
	
	commonfun(&num[0][0],3,3);
}
