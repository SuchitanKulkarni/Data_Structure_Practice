/* scan two strings from user check whearther they contain same number of characters or not */

#include<iostream>
using namespace std;

int main()
{ 
    char str1[100];
    char str2[100];
    
    cout<<"enter the string 1 :"<<endl;
    cin.getline(str1,100);
    
    cout<<"enter the string 2 :"<<endl;
    cin.getline(str2,100);
    
    int i,j;
    
    while(str1[i]!='\0')
    {
    	i++;
    	
	}
	while(str2[j]!='\0')
	{
		j++;
	}
	
	if(i==j)
	{
		cout<<"They have same length";
	}
	else
	{
		cout<<"they does not have same length ";
	}
    
    return 0;
}
