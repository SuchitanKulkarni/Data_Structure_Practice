/* scan a string from user check if 'A' is present in the string */

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
		if(str[i]=='A')
		{
			cout<<"Is present";
			count++;
			break;
		}
		
		i++;
	}
	
	if(count==0)
	{
		cout<<"Is not present";
	}
	
	return 0;
}
