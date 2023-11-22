#include<iostream>
using namespace std;

class vehicle
{
	public:
		
		char *name;
		
};

class Teacher
{
	public :
		char * Tname;
		
		vehicle var;
		
		
};

int main()
{
    Teacher  obj;
    
    obj.Tname = new char[90];
    obj.var.name = new char[90];
    
    cout<<"enter the vehical name and teacher name : "<<endl;
    cin.getline(obj.var.name,90);
    cin.getline(obj.Tname,90);
    
    cout<<obj.Tname<<" "<<obj.var.name;
    
	return 0;
}
