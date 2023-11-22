/* WAP to copy one string in another */

#include<iostream>
using namespace std;

int main()
{
	char str1[100];
	char str2[100];
	
	cout<<"Enter the string :"<<endl;
	cin.getline(str1,100);
	int i;
	while(str1[i]!='\0')
	{
		str2[i]=str1[i];
		i++;
	}
	str2[i]='\0';
	
	cout<<str1<<"\n"<<str2;
	
	return 0;
}
