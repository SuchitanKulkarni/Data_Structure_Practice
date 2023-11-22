/* scan string from user. find its length */

#include<iostream>
using namespace std;

int main()
{
	char str[100];
	cout<<"enter the string :"<<endl;
	cin.getline(str,100);
	int count=0;
	int i;
	while(str[i]!='\0')
	{
		count++;
		i++;
	}
	
	cout<<"length = "<<count;
	
	return 0;
}
