#include<iostream>
#include<stack>
using namespace std;

bool isBalanced(string expr)
{
	stack<char>s;
	char ch;
	int i;
	for(i=0;i<expr.length();i++)
	{
		if(expr[i]=='('||expr[i]=='['||expr[i]=='{')
		{
			s.push(expr[i]);
		}
		if(s.empty())
		{
			return 0;
		}
		
		switch(expr[i])
		{
			case ')' : ch = s.top();
			           s.pop();
			           if(ch=='{'||ch=='[')
			           {
			           	return 0;
					   }
					   break;
			case '}' : ch=s.top();
			       	   s.pop();
			       	   if(ch=='('||ch=='[')
			       	   {
			       	   	 return 0;
						  }
						  break;
			case ']' : ch=s.top();
						s.pop();
						if(ch=='('||ch=='{')
						{
							return 0;
						}
						break;
		}
		
	}
	return (s.empty());
}
int main()
{
	string expr = "{{{([])}}}";
	if(isBalanced(expr))
	{
		cout<<"Balanced";
	}
	else
	{
		cout<<"Not balanced";
	}
	
	return 0;
}
