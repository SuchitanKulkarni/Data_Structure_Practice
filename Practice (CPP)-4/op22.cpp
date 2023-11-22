#include<iostream>
#include<string.h>
using namespace std;

class String
{
	char str[30];
	
	public:
		
		void getstring()
		{
			cout<<"Enter the string  : "<<endl;
			cin.getline(str,30);
		}
		
		int operator < (String p)
		{
			int res = strcmp(str,&p.str[0]);
			
			if(res== -1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		
		friend ostream& operator <<(ostream& dout,String p);
};

ostream& operator <<(ostream& dout,String p)
{
	cout<<p.str;
	
	return dout;
}

int main()
{
	String s1,s2,s3;
	
	s1.getstring();
	s2.getstring();
	s3.getstring();
	
	String res;
	
	res = s1 < s2 ? s1 : s2;
	res = s3 < res ? s3 : res;
	
	cout<<res<<"  will go frist in dictnory";
	
	return 0; 
}
