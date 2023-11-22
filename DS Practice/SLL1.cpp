#include<iostream>
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
		cout<<"node destroyed"<<endl;
	}
};

class SLL
{
	node*head;
	
	public :
		
		SLL()
		{
			head = NULL;
		}
		
		void create();
		void show();
		int count();
		int search(int);
		void addatbeg(int);
		void addatend(int);
		void addbypos(int,int);
	
};

int main()
{
	SLL s1,s2;
	
	s1.create();
	s1.show();
	
	int n;
	n = s1.count();
		
	cout<<"---------------------Search---------------"<<endl;
	int x;
	cout<<"Enter the number to search : "<<endl;
	cin>>x;
	
	if(s1.search(x)==1)
	{
		cout<<"found"<<endl;
	}
	else
	{
		cout<<"Not found"<<endl;
	}
	
	s1.addatbeg(5);
	s1.addatend(4);
	s1.show();
	
	int pos;
	cout<<"Enter the position : "<<endl;
	cin>>pos;
	cout<<"Enter the data : "<<endl;
	cin>>x;
	
	s1.addbypos(pos,x);
	s1.show();
	
}

void SLL::create()
{
	node*p = NULL;
	
	int x,n,i;
	
	cout<<"---------------Create-----------------"<<endl;
	
	cout<<"\nEnter the no. of nodes you want to enter : "<<endl;
	cin>>n;
	
	cout<<"Enter the first node : "<<endl;
	cin>>x;
	
	head = new node(x);
	
	p = head;
	
	for(i=1;i<n;i++)
	{
		cout<<"Enter the data : "<<endl;
		cin>>x;
		
		p->next = new node(x);
		p = p->next;
		
	}
}

void SLL::show()
{
	node *p = NULL;
	
	p = head;
	
	cout<<"------------------Show--------------"<<endl;
	
	cout<<"\n Nodes are : "<<endl;
	
	while(p != NULL)
	{
		cout<<p->data<<endl;
		
		p = p->next;
	}
}

int SLL::count()
{
	node* p = NULL;
	
	p = head;
	
	int count = 0;
	
	while(p!= NULL)
	{
		count++;
		p = p->next;
	}
	
	return count;
}

int SLL::search(int x)
{
	node *p = NULL;
	
	p = head;
	
	if(head == NULL)
	{
		cout<<"List is empty"<<endl;
	}
	else
	{
		while(p != NULL)
		{
			if(p->data == x)
			{
				return 1;
			}
			p = p->next;
		}
		
		return 0;
	}
}

void SLL::addatbeg(int x)
{
	node *p = NULL;
	
	p = new node(x);
	
	p->next = head;
	
	head = p;
}

void SLL::addatend(int x)
{
	node *p = NULL;
	
	p = new node(x);
	
	node *q = NULL;
	
	if(head == NULL)
	{
		head = p;
	}
	else
	{
		q = head;
		
		while(q->next != NULL)
		{
			q = q->next;
		}
		
		q->next = p;
		
	}
}

void SLL::addbypos(int pos,int x)
{
	int n,i;
	
	cout<<"----------------ADD BY POSITION-------------------"<<endl;
	
	n = count();
	
	if(pos<1 || pos>n+1)
	{
		cout<<"Invalid position"<<endl;
		
		return ;
	}
	if(pos==1)
	{
		addatbeg(x);
	}
	else
	{
		node * p = NULL;
		node * q = NULL;
		
		q = head;
		
	    for(i=1;i<pos-1;i++)
	    {
	    	q = q->next;
		}
		
		p = new node(x);
		
		p->next = q->next;
		q->next = p;
		
		}
	}


