//scan name and salary for 8 employees print name of all those employees whose salary is greater than 20000.

#include<iostream>
using namespace std;

class employee
{
	char name[30];
	int salary;
	
	public : 
	
	employee()
	{
		cout<<"Enter the name  : "<<endl;
		cin.getline(name,30);
		
		cout<<"Enter the salary : "<<endl;
		cin>>salary;
		cin.ignore(1);
	}
	
	int compare()
	{
		if(salary >2000)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	
	void show()
	{
		cout<<name<<endl;
	}
};
int main()
{
	employee emp[8];
	
	int i;
	
	for(i=0;i<8;i++)
	{
		if(emp[i].compare()==1)
		{
			emp[i].show();
		}
	}
	
	return 0;
}
