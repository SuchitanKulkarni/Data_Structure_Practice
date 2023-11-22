/* daclare and initialize a string containing your name print this string one character at a time like character array and then print as a string */

#include<iostream>
using namespace std;

int main()
{
	char str[90];
	cout<<"enter the name :"<<endl;
	cin.getline(str,89);
	
	int i;
	while(str[i]!='\0')
	{
		cout<<str[i]<<endl;
		
		i++;
	}
	
	cout<<"\n"<<str;
	
	return 0;
 } 
