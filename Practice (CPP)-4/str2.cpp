/* scan a string from user , count how many times 'A ' is present in string */

#include<iostream>
using namespace std;

int main()
{
	char str[100];
	cout<<"Enter the string :"<<endl;
	cin.getline(str,100);
	int count=0;
	int i;
	while(str[i]!='\0')
	{
		if(str[i]=='A')
		{
			count++;
		}
		i++;
	}
	cout<<"count = "<<count;
	
	return 0;
}
