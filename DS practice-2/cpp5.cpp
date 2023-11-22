#include<iostream>
#include<Cstdlib>
#include<deque>
using namespace std;

int main()
{
	int choice,element;
	char ch;
	deque<int>dq;
	deque<int>ditr;
	cout<<"---------------MENU-------------------";
	cout<<"\n1.insert element at front";
	cout<<"\n2.insert the element ant rear.\n3.Delete element from front.\n4.delete the element from rear";
	cout<<"\n5.display element from front.\n6.display element from rear";
	cout<<"\n7.dispaly queue.\n8.Exit";
	
	do
	{
		cout<<"enter your choice";
		cin>>choice;
		switch(choice)
		{
			case 1 : cout<<"enter the element to insert at front";
			        cin>>element;
			        dq.push_front(element);
			        break;
			case 2: cout<<"enter the element to insert element at rear";
			        cin>>element;
			        dq.push_back(element);
			        break;
			case 3 :cout<<"the front element",dq.front(),"is going to delete";
			        dq.pop_front();
			        break;
			case 4 :cout<<"the rear element",dq.back(),"is going to delete";
			        dq.pop_back();
			        break;
			case 5:cout<<"the front element";
			       cout<<dq.front();
			       break;
			case 6: cout<<"the rear element";
			        cout<<dq.back();
			        break;
			case 7 : if(dq.empty())
		           	{
		           		cout<<"queue is empty";
				
			        }
			        else
			        {
			        	for(ditr=dq.begin();ditr<dq.end();ditr=ditr+1)
			        	{
			        		cout<<*ditr<<"\t";
						}
					}
					break;
			case 8 : cout<<"Exit";
			          exit(0);
			default :cout<<"wrong input";
			         exit(5);
			         
		}
		cout<<"Do you want to continue (y or n)";
		cin>>ch;
		
	}while(ch=='y'||ch=='Y');
	return 0;
}
