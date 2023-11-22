
#include <iostream>
using namespace std;

class Node
{
	public:
	int data;
	Node *lchild,*rchild;
	bool right;
	bool left;

	Node()
	{
		data = 0;
		lchild = NULL;
		rchild = NULL;
		right = false;
		left = false;
	}
	Node(int a)
	{
		data = a;
		lchild = NULL;
		rchild = NULL;
		right = false;
		left = false;
	}
};

class queue
{
private:
	int r,f;
	Node *q[25];
public:
	queue()
	{
		r=f= -1;
	}
	void add(Node *p)
	{
		r++;
		q[r] = p;
	}
	Node* del()
	{
		f++;
		return q[f];

	}
	int empty()
	{
		if(r == -1 || f>=r)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
};


class TBT
{
	Node *root;
public:
	queue q;
	void insertNode(int key);
	Node* inordertraversal(Node *s,Node*r);

};
Node* TBT::inordertraversal(Node *s,Node*r)
{


	while(true)
	{
		while(s != NULL)
		{
			q.add(s);
			s = s->lchild;
		}
		if(q.empty())
		{
			return NULL;
		}
		s = q.del();
		if(s->data)
		{

		}


	}
}
void TBT::insertNode(int key)
{
	Node *ptr = root;
	Node *par = NULL;
	while(ptr != NULL)
	{
		if(key < ptr->data)
		{
			if(ptr->left == false)
			{
				ptr = ptr->lchild;
			}
			else
			{
				break;
			}
		}
		else
		{
			if(ptr->right == false)
			{
				ptr = ptr->rchild;
			}
			else
				break;
		}
	}

	Node *newNode = new Node;
	newNode->data = key;
	newNode->left = true;
	newNode->right = true;

	if(par == NULL)
	{
		root = newNode;
		newNode->lchild = NULL;
		newNode->rchild = NULL;

	}
	else if(key <par->data)
	{
		newNode ->lchild = par ->lchild;
		newNode ->right = par;
		par->left = false;
		par ->lchild = newNode;
	}
	else
	{
		newNode->lchild = par;
		newNode->rchild = par->rchild;
		par->right = false;
		par->rchild = newNode;

	}
}

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}

