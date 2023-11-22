#include<iostream>
#define max 10


using namespace std;

class DFS
{
	public:
	int G[max][max],visit[max];
	int i,j,v;
	
	void create();
	void display();
	void dfs(int x);
	
	
};


void DFS::create()
{
	cout<<"\nEnter number of vertices : ";
	cin>>v;
	cout<<"\nEnter adjency matrix : ";
	
	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			cin>>G[i][j];
		}
	}
	
	
	for(i=0;i<v;i++)
	{
		visit[i]=0;
	}
}

void DFS::display()
{

	cout<<"\n\n";
	for(i=0;i<v;i++)
	{
	
		for(j=0;j<v;j++)
		{
			cout<<G[i][j]<<" ";
		}
		cout<<"\n";
	}
	
}

void DFS::dfs(int x)
{
	cout<<"\n"<<x;
	
	visit[x]=1;
	for(int j=0;j<v;j++)
	{
		if(!visit[j] && G[x][j]==1)
		{
			
			cout<<" "<<j;
			dfs(j);
		}
	}
	
}


int main()
{
	DFS d;
	int x;
	d.create();
	cout<<"\nNode from which to start dfs : ";
	cin>>x;
	d.dfs(x);
	d.display();
	return(0);
}
















