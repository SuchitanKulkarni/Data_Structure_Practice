#include<iostream>
using namespace std;

class node
{
	public:
		
		int data;
		node * next;
		
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
		cout<<"\nnode removed : "<<endl;
	}
};

class SLL
{
	node * head;
	
	public:
		
		SLL()
		{
			head = NULL;
		}
		
	void create();
	void recshow(node *);
	int recsearch(node*,int);
	int reccount(node*);
	
	node * gethead()
	{
		return head;
	}
	
};

void SLL :: create()
{
	int n,x,i;
	
	cout<<"Enter the number of node : "<<endl;
	cin>>n;
	
	if(n==0)
	{
		cout<<"no nodes are present : "<<endl;;
		return ;
	}
	else
	{
		cout<<"Enter the first node : "<<endl;
		cin>>x;
		node * p = NULL;
		
		head = new node(x);
		
		p = head;
		
		for(i=1;i<n;i++)
		{
			cout<<"Enter the nodes : "<<endl;
			cin>>x;
			
			p ->next = new  node(x);
			p = p->next;
		 } 
		
	}
}

void SLL :: recshow(node * p)
{
	if(p==NULL)
	{
		return;
	}
	else
	{
		cout<<p->data<<" ";
		recshow(p->next);
	}
}

int SLL :: reccount(node * p)
{
	if(p == NULL)
	{
		return 0;
	}
	else
	{
		int res;
		res = reccount(p->next);
		
		return res +1;  
	}
}

int SLL :: recsearch(node * p,int x)
{
	if(p == NULL)
	{
		return 0;
	}
	if(p->data == x)
	{
		return 1;
	}
	else
	{
		int res;
		res = recsearch(p->next,x);
		
		return res;
	}
}

int main()
{
	SLL s1;
	
	s1.create();
	
	node * h = s1.gethead();
 	s1.recshow(h);
 	  cout<<" \ncount = "<<s1.reccount(h);
 	  
 	if(s1.recsearch(h,5))
 	{
 		cout<<"\nfound";
	 }
	 else
	 {
	 	cout<<"not found"<<endl;
	 }
}
