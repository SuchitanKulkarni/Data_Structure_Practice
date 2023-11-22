#include<iostream>
#include<string.h>
using namespace std;

class book_node
{
	public:
	char title[20];
	int chapt_count;
    book_node *down[10];
	
	book_node()
	{
		title[0] = '\0';
		chapt_count = 0;
		down[0] = NULL;
	}
	
	book_node(int a,char *p)
	{
		strcpy(title,p);
		chapt_count = a;
		down[0] = NULL;
	}
};

class book
{
	
	public:
		book_node * root;
		void create_tree();
		void display();
		
	book()
	{
	    	root=NULL;
	}
};

void book::create_tree()
{
	 int i,j,k;
	root=new book_node;
	cout<<"Enter name of the book: "<<endl;
	cin.ignore(1);
	cin.getline(root->title,20);
	cout<<"Enter total number of chapters in the book: "<<endl;
	cin>>root->chapt_count;
	cin.ignore(1);
//	cout<<root->chapt_count;
	for(i=0;i<root->chapt_count;i++)
	{	
	root->down[i]=new book_node;
	cout<<"Enter Name for chapter "<<i+1<<endl; 
	cin.getline(root->down[i]->title,20);
	cout<<"Enter no. of sections in  "<<root->down[i]->title<<endl;
	cin>>root->down[i]->chapt_count;
	cout<<"Enter details for chapter " <<i+1<<endl<<endl;
	for(j=0;j<root->down[i]->chapt_count;j++)
	{
		 
	root->down[i]->down[j]=new book_node;
	cout<<"Enter title for section "<<j+1<<endl;
	cin.ignore(1);
     cin.getline(root->down[i]->down[j]->title,20);
	cout<<"Enter no. of sub sections in section "<<j+1<<endl;
	cin>>root->down[i]->down[j]->chapt_count;
	cin.ignore(1);
	for(k=0;k<root->down[i]->down[j]->chapt_count;k++)
	{
	root->down[i]->down[j]->down[k]=new book_node;
	cout<<"Enter title for subsection "<<k+1<<endl;
	cin.getline(root->down[i]->down[j]->down[k]->title,20);
	}
	
	}
	
} 
	 
	
	
}  

void book::display()
{    int i,j,k;
     book_node *r;
     
     r = root;
     
	if(r!=NULL)
	{
		cout<<"****index****"<<endl; 
		cout<<"Book Title: "<<r->title<<endl<<endl;

		for(i=0;i<r->chapt_count;i++)
    	{  cout<<"\t";
	       cout<<"Chapter " <<i+1<<": "<<r->down[i]->title<<endl;
	      
	       for(j=0;j<r->down[i]->chapt_count;j++)
		    {
		    cout<<"\t\t";
	       cout<<"Section "<<j+1<<": "<<r->down[i]->down[j]->title<<endl;
	       
		   for(k=0;k<r->down[i]->down[j]->chapt_count;k++)
		   {  cout<<"\t\t\t";
			 cout<<"Sub Section "<<k +1<<": "<<r->down[i]->down[j]->down[k]->title<<endl; 
        	} 
          }
		}
		
		
	}
}

int main()
{
	int choice;
	book book;
	while(1)
	{
		cout<<"Menu:"<<endl;
		cout<< "Book tree structure"<<endl;
		cout<<"1. Create tree"<<endl;
		cout<<"2. Display tree"<<endl;
		cout<<"3. Exit"<<endl;
		cout<< "Enter your choice"<<endl;
		cin>>choice;
		switch(choice)
		{
		case 1:
			book.create_tree();
			break;
			
		case 2:
			book.display();
			break;
		case 3:
			exit(0);
			
		}
		
		int x;
		
		cout<<"Do you wnat to  continue (no = 0) : "<<endl;
		cin>>x;
		//cout<<"hello";
		if(x == 0)
		{
			break;
		}
	}
	return 0;
}
