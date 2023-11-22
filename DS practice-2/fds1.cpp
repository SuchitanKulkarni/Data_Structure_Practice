#include<iostream>
#define MAX 10
using namespace std;

class Queue
{
	private :
		int data[MAX];
		int front,rear;
		
	public :
		Queue()
		{
			front=rear=-1;
		}
		int isempty ();
		int isfull ();
		void enqueue(int);
		int delqueue ();
		void display();
		
};
int Queue::isempty()
{
	if(front==rear)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int Queue::isfull()
{
	if(rear==MAX-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void Queue::enqueue(int x)
{
	rear++;
	data[rear]=x;
}
int Queue::delqueue()
{
	front++;
	return(data[front]);
}
void Queue::display()
{
	int i;
	cout<<"\n";
	for(i=front+1;i<=rear;i++)
	{
		cout<<data[i]<<" ";
	}
	
}
int main()
{
	Queue Q;
	int ch,x;
	do
	{
		cout<<"--------------------MENU-------------------";
		cout<<"\n1.insert job.\n2.Delete job\n3.Display.\n4.Exit";
		cout<<"Enter your choice :";
		cin>>ch;
		switch(ch)
		{
			case 1 : if(!Q.isfull())
			          {
			          	cout<<"enter your job :";
			          	cin>>x;
			          	Q.enqueue(x);
					  }
					  else
					  {
					     cout<<"Queue is full";
					  }
					  break;
			case 2 : if(!Q.isempty())
			          {
			          	cout<<"Deleted the job = "<<Q.delqueue();
			          	
					  }
					  else
					  {
					  	cout<<"Queue is empty";
					  	
					  }
					  break;
		    case 3 : if(!Q.isempty())
		             {
		             	cout<<"job is :";
		             	Q.display();
					 }
					 else
					 {
					 	cout<<"Queue is empty";
					 }
					 break;
			case 4: 
			        cout<<"Program exited";
			        exit(0);
			        
		}
	}while( ch!=4);
}
