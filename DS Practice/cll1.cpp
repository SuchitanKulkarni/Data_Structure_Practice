#include<iostream>
using namespace std;

class node
{
	public:
		
		int  data;
		node * next ;
		
	node()
	{
		data = 0;
		next = NULL;		
	}
	node ( int a)
	{
		data = a;
		next = NULL;
	}
	~node()
	{
		cout<<"\nnode is removed : "<<endl;
	}
};

class CLL
{
	node * front;
	node * rear;
	
    public:
    	
    CLL()
    {
    	front = rear = NULL;
	}
		
	void create();
	void show();
	void addatbeg(int);
	void addatend(int);
	void addbypos(int,int);
	void delatbeg();
	void delatend();
	void delbypos(int);
	int search(int);
	int count();
	
};

void CLL:: create()
{
	int n,x,i;
	
	cout<<"Enter the number of node : "<<endl;
	cin>>n;
	
	if(n==0)
	{
		cout<<"no noodes are present : "<<endl;
		return ;
	}
	else
	{
		cout<<"Enter the first node : "<<endl;
		cin>>x;
		
		node * p = NULL;
		
		front = new node (x);
		rear = front;
		rear->next = front;
		
		p = front;
		
		for(i=1;i<n;i++)
		{
			cout<<"Enter the nodes : "<<endl;
			cin>>x;
			
			p->next = new node(x);
			
			p = p->next;
		}
		
		rear = p;
		rear->next = front;		
	}
} 

void CLL::show()
{
	node * p = NULL;
	
	p = front;
	
	do
	{
		cout<<p->data<<" ";
		
		p = p->next;
		
	}while(p!=front);
}

void CLL::addatbeg(int x)
{
	node * p = NULL;
	
	p = new node(x);
	
	if(front == NULL)
	{
		front = rear = p;
		rear ->next = front;
	}
	else
	{
		
		p->next = front;
		front = p;
		
		rear ->next = p;
	}

}

void CLL::addatend(int x)
{
	node * p = NULL;
	
	p = new node(x);
	
	if(front == NULL)
	{
		rear = front = p;
		
		rear->next = front;
	}
	else
	{
          p->next = rear->next; 
		  rear->next = p;
		  rear = p;		
	}
	
}

void CLL :: delatbeg()
{
	if(front == NULL)
	{
		cout<<"list is empty : "<<endl;
	}
	if(front->next == front)
	{
		delete front;
		
		front = rear = NULL;
	}
	else
	{
		node * p = NULL;
		
		p = front;
		
		front = front->next;
		rear->next = front;
		
		delete p;
	}
}

void CLL :: delatend()
{
	if(front == NULL)
	{
		cout<<"list is empty"<<endl;
		return ;
	}
	if(front == rear)
	{
		delete front;
		
		front = rear = NULL;
	}
	else
	{
		node * p = NULL;
		
		p = front;
		
		while(p->next!= rear)
		{
			p = p->next;
		}
		
		rear = p;
		p = p->next;
		rear ->next = front;
		
		delete p;
		
	}
}

void CLL :: addbypos(int pos, int x)
{
	int n ;
	
	n = count();
	
	if(pos<1 || pos>n+1)
	{
		cout<<"invalid position"<<endl;
		return ;
	}
	if(pos==1)
	{
		addatbeg(x);
	}
	else
	{
		node * p = NULL;
		
		p = front;
		
		for(int i = 1;i<pos-1;i++)
		{
			p = p->next;
		}
		
		node * q = NULL;
		
		q = new node (x);
		
		q->next = p->next;
		p->next = q;
		
		if(pos == n+1)
		{
			rear = q;
		}
	}
}

int CLL :: count()
{
	node * p = NULL;
	int c = 0;
	p = front;
	
	do
	{
		c++;
		
		p = p->next;
		
	}while(p!= front);
	
	return c;
}

void CLL :: delbypos(int pos)
{
	int n ;
	
	n = count();
	
	if(pos<1 || pos>n)
	{
		cout<<"invalid position"<<endl;
		return;
	}
	if(pos==1)
	{
		delatbeg();
	}
	else
	{
		node * p = NULL;
		
		p = front;
		
		for(int i = 1;i<pos-1;i++)
		{
			p = p->next;
		}
		
		node * q = NULL;
		
		q = p->next;
		
		p->next = q->next;
		
		delete q;
	}
}

int main()
{
	CLL c1;
	
	c1.create();
	c1.show();
	c1.addatbeg(5);
	cout<<"\n----after addatbeg-----"<<endl;
	c1.show();
	c1.addatend(10);
	cout<<"\n------after addatend--------"<<endl;
	c1.show();
	c1.delatbeg();
	cout<<"\n-----after delatbeg--------"<<endl;
	c1.show();
	c1.delatend();
	cout<<"\n-------after delatend-------"<<endl;
	c1.show();
	cout<<" count = "<<c1.count();
	c1.addbypos(3,19);
	cout<<"\n-------after addbypos------"<<endl;
	c1.show();
	c1.delbypos(2);
	cout<<"\n-------after delbypos-------"<<endl;
	c1.show();
	
	return 0;
}
