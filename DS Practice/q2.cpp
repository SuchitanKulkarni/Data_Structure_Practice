#include<iostream>
#define MAX 50
using namespace std;

class node
{
	public:
		
		int data;
		node*next;
		
	node()
	{
		data = 0;
		next = NULL;
	}
	
	node(int a)
	{
		data = a;
		next = NULL;
	}
	~node()
	{
		cout<<"\nnode deleted"<<endl;
	}
};

class Queue
{
	int data[MAX];
	node* front;
	node* rear;
	
	public:
		
		Queue()
		{
			front = rear = NULL;
		}
		
		int empty()
		{
			if(front == NULL)
			{
				return 1;
			}
			
			return 0;
		}
		
		void enqueue(int x)
		{
			node* p = new node(x);
			
			if(front == NULL)
			{
				front = rear = p;
			}
			else
			{
				rear->next = p;
				rear = p;
			}
		}
		
		int dequeue()
		{
			if(empty()==1)
			{
				cout<<"queue is empty"<<endl;
				return -1;
			}
			else
			{
				int x = front->data;
				node*p = front;
				front = front->next;
				
				delete p;
				
				return x;
			}
		}
		
		void display()
		{
			node*p = front;
			
			while(p!=NULL)
			{
				cout<<p->data<<" ";
				
				p =p->next;
			}
		}
		
};

int main()
{
	Queue s1;
	
	s1.enqueue(23);
	s1.enqueue(34);
	s1.enqueue(56);
	
	s1.display();
	
	cout<<s1.dequeue()<<" ";
	cout<<s1.dequeue()<<" ";
	
	return 0;
}
