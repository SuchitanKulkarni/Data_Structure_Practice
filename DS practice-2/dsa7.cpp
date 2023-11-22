
#include<iostream>
using namespace std;

class Connections
{
	int a[20][20];
	int l,u,i,j,branch,e;
	int wedge;
	int visited[20];
public:
	void input();
	void display();
	void minimum();
};

void Connections::input()
{
	cout<<"\n\t\t Enter the MAXIMUM no of offices::: ";
	cin>>branch;

	for(i=0;i<branch;i++)
	{
		visited[i]=0;
		for(j=0;j<branch;j++)
		{
			a[i][j]= 8888;
		}
	}

	cout<<"\n\t\t Enter the no of lease lines::: ";
	cin>>e;

	for(i=0;i<e;i++)
	{
		cout<<"\n\t\t Enter the lease lines (edge) and Their costs(v1,v2,wt)::"<<endl;
		cin>>l>>u;
		cout<<"Cost =  ";
		cin>>wedge;
		a[l-1][u-1]=a[u-1][l-1]=wedge;
	}
}

void Connections::display()
{
	cout<<"\nAdjacency matrix:";
	for(i=0;i<branch;i++)
	{
		cout<<endl<<"|";
		for(j=0;j<branch;j++)
		{

			if(a[i][j] == 8888)
			{
				cout<<0<<"   ";
			}
			else
			{
				cout<<a[i][j]<<"   ";
			}
		}
		cout<<"|"<<endl;
	}
}

void Connections::minimum()
{
	int p=0,q=0,total=0,min;
	visited[0]=1;
	for(int count=0;count<(branch-1);count++)
	{
		min=a[0][0];
		for(i=0;i<branch;i++)
		{
			if(visited[i]==1)
			{
				for(j=0;j<branch;j++)
				{
					if(visited[j]!=1)
					{
						if(min > a[i][j])
						{
							min=a[i][j];
							p=i;
							q=j;
						}
					}
				}
			}
		}
		visited[p]=1;
		visited[q]=1;
		total=total + min;
		cout<<"Minimum cost connection is"<<(p+1)<<" -> "<<(q+1)<<"  with charge : "<<min<< endl;

	}
	cout<<"The minimum total cost of connections of all branches is: "<<total<<endl;
}

int main()
{
	int ch;
	Connections t;
	do
	{
		cout<<"===============PRIM'S ALGORITHM================="<<endl;
		cout<<"\n1.INPUT"<<endl
			<<"2.DISPLAY"<<endl
			<<"3.MINIMUM\n"<<endl;
		cout<<"Enter your choice :"<<endl;
		cin>>ch;

	switch(ch)
	{
	case 1:
		t.input();
		break;

	case 2: cout<<"******************"<<endl;
		t.display();
		break;

	case 3: cout<<"******************"<<endl;
		t.minimum();
		break;
	}

	}while(ch!=4);
	return 0;
}

