#include <iostream>
#include <stdlib.h>
#include<string.h>
using namespace std;

class node
{
	public:
	char kwd[20];
	char meaning[40];
	node *left,*right;
	
	node()
	{
		kwd [0]= '\0';
		meaning[0] = '\0';
		left = NULL;
		right = NULL;
	}
	node(char *q , char * p)
	{
		strcpy(kwd,q);
		strcpy(meaning,p);
		left = NULL;
		right = NULL;
	}
};

class tree
{
	public:
		node *root,*temp;
		tree() 
		{
		 root=NULL;
		}
		void create();
		void insert(node *,node *);
		void inorder(node *);
		node * search(node *,char []);
		node *Delete(node * ,char []);
		int comparisons(node *);
};


void tree::create()
{
    int n;
    char str1[30],str2[40];
    
    cout<<"Enter the entries : "<<endl;
    cin>>n;
    cin.ignore(1);
    
    for(int i = 0;i<n;i++)
	{
		cout<<"Enter the keyword : "<<endl;
		cin.getline(str1,30);
		cout<<"Enter the meaning : "<<endl;
		cin.getline(str2,40);
		temp = new node(str1,str2);
		
		if(root == NULL)
		{
			root = temp;
		}
		else
		{
			insert(root,temp);
		}
		
	}	
}

void tree::insert(node *root,node *temp)
{   

	if(strcmp(temp->kwd,root->kwd)<0)
	{
	
	if(root->left==NULL)
	{
	
	root->left=temp;
}
	else
	{
	
	insert(root->left,temp);
}
	}
	
	else if(strcmp(temp->kwd,root->kwd)>0)
	{
		if(root->right==NULL)
		{
		
		root->right=temp;
	}
		else
		{
		
		insert(root->right,temp);
	}
	}
}

int tree::comparisons(node *T)
{
		if(T==NULL)
		{
		
		return(0);
	}
		
		if(T->left==NULL && T->right==NULL)
		{
		
		return(0);
	}
		
	return(max(comparisons(T->left),comparisons(T->right))+1);
}

node * tree:: Delete (node * root, char x[])
{

  if (root == NULL)
    {
      cout << "Node not found ";
      return NULL;
    }

  if (strcmp(x,root->kwd)<0 )
    {
      root->left = Delete (root->left, x);
    }

  else if (strcmp(x,root->kwd)>0)
    {
       root->right = Delete (root->right, x);
    }
  else
    {

      if (root->left == NULL)
	{
	  node *temp = root->right;
	  free (root);
	  return temp;
	}

      else if (root->right == NULL)
	{
	  node *temp = root->left;
	  free (root);
	  return temp;
	}
      else
	{

	  node *temp = root->right;

	  while (temp->left != NULL)
	  {
	  
	    temp = temp->left;

	  strcpy(root->kwd, temp->kwd);
	  strcpy(root->meaning, temp->meaning);

	  root->right = Delete (root->right, temp->kwd);
	}
}
    }
  return root;

}


void tree::inorder(node *root)
{
	if(root!=NULL)
   {
	
	inorder(root->left);
	cout<<" "<<root->kwd;
	cout<<"("<<root->meaning<<")";
	inorder(root->right);
   }
}



node * tree::search(node * temp,char x[])
{
	

	while(temp!=NULL)
	{
		if(strcmp(x,temp->kwd)<0)
		{
			temp=temp->left;
		}
		else if(strcmp(x,temp->kwd)>0)
		{
			temp=temp->right;
		}
		else if(strcmp(x,temp->kwd)==0)
		{
			break;
		}
	}
return temp;
}

int main()
{	
	node *temp;
	tree t1;
	char key[20];
	int xx,op,x,c;
	do
{
	cout<<"\n\n1.Create\n2.Insert";
	cout<<"\n3.Update \n4.inorder display\n 5.delete\n6.Search\n7.Max comparisons \n8.Exit";
	cout <<"\nEnter Your Choice :"<<endl;
	cin>>op;
	switch(op)
	{
	case 1: 
			t1.create();
			break;
	case 2:
			temp=new node;
			temp->left=NULL;
			temp->right=NULL;
			cout<<"\nenter a new keyword you want to add\n";
			cin>>temp->kwd;
			cout<<"\nenter meaning of keyword you want to add\n";
			cin.getline(temp->meaning,40);
			t1.insert(t1.root,temp);
		break;
	case 3: 
			cout<<"\nenter a keyword which you want to update\n";
			cin>>key;
			
			temp=t1.search(t1.root,key);
			if(temp==NULL)
			cout<<"Sorry No such keyword is found in dictionary\n";
			else
			{
			cout<<"\nenter new meaning of keyword you want to update\n";
			cin.getline(temp->meaning,40);
		   }
			break;
	case 4:
			t1.inorder(t1.root);
			break;
	case 5: 
			int x;
			cout<<"\n Enter a keyword to delete\n";
			cin>>key;
			t1.Delete(t1.root,key);
			
			break;
	
	case 6:
			cout<<"enter keyword to search";
			cin>>key;
			temp=t1.search(t1.root,key);
			if(temp==NULL)
			cout<<"Sorry No such keyword is found in dictionary\n";
			else
			{
				cout<<"\nData Found\n";
				
	    	}
			break;
	case 7:
			c=t1.comparisons(t1.root);
			cout<<"\n Maximum number of comparisons to search any node in this tree is"<<c+1;
	case 8:
			exit(0);
	}
}
while(op!=7);
return 0;
}
