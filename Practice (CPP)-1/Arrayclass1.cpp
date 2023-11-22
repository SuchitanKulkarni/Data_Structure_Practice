#include<iostream>
using namespace std;

class student
{
	public:
		int marks[4];
		
		void scan()
		{
			cout<<"enter the marks of 3 subjects : "<<endl;
			int i;
			for(i=0;i<4;i++)
			{
				
				cin>>marks[i];
			}
			
		}
		void average()
		{
			int sum = 0;
			float avg;
			int i;
			
			for(i=0;i<4;i++)
			{
				sum = sum +marks[i];
			}
			
			avg = sum/4.0;
			
			cout<<"Average = "<<avg<<endl;
		}
};

int main()
{
	student s1,s2,s3;
	
	s1.scan();
	s2.scan();
	s3.scan();
	
	s1.average();
	s2.average();
	s3.average();
	
	return 0;
}
