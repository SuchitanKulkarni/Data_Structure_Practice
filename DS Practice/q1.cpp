#include<iostream>
#define MAX 50
using namespace std;

class Queue
{
	int data[MAX];
	int front;
	int rear;
	
	public:
		
		Queue()
		{
			front = -1;
			rear = -1;
		}
		
		int empty()
		{
			if(front == -1)
			{
				return 1;
			}
			
			return 0;
		}
		
		int full()
		{
			if(rear == MAX-1)
			{
				return 1;
			}
			
			return 0;
		}
		
		void enqueue(int x)
		{
			if(full()==1)
			{
				cout<<"queue full";
				return;
			}
			else 
			{
				if(empty()==1)
				{
					front++;
				}
				
				rear++;
				
				data[rear] = x;
			}
			
		}
		
		int dequeue()
		{
			if(empty()==1)
			{
				cout<<"queue empty";
				return -1;
			}
			else
			{
				int x = data[front];
				
				if(front == rear)
				{
					front = rear = -1;
				}
				else
				{
					for(int i=front;i<=rear-1;i++)
					{
						data[i] = data[i+1];
					}
					
					rear--;
				}
				
				return x;
			}
		}
};

int main()
{
	Queue q;
	
	q.enqueue(35);
	q.enqueue(90);
	q.enqueue(78);
	
	cout<<q.dequeue()<<" ";
	cout<<q.dequeue()<<" ";
	cout<<q.dequeue()<<" ";
	
	return 0;
}
