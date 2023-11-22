#include<iostream>
#include<string.h>
using namespace std;

class employee
{
	char name[30];
	
	public:
		
		void scan()
		{
			cout<<"Enter the string : "<<endl;
			cin.getline(name,30);
		}
		int operator == (employee p)
		{
			int res = strcmp(name,&p.name[0]);
			
			if(res==0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
};
int main()
{
	employee E1,E2;
	
	E1.scan();
	E2.scan();
	
	if(E1 == E2)
	{
		cout<<"strings are equal ";
	}
	else
	{
		cout<<"String are nnot equal ";
	}
	
	return 0;
}
