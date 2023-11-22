#include<iostream>
#include<conio.h>
using namespace std;

void DFS(int );

int G[10][10],visited[10],n;


int  main()
{
	int i,j;
	
	cout<<"\nENter the no. of vertices : "<<endl;
	cin>>n;
	
	cout<<"\nENter the adjacancy maxtrix of the grapgh : "<<endl;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>G[i][j];
		}
	}
	
	for(i=0;i<n;i++)
	{
		visited[i] = 0;
	}
	DFS(0);
	
	return 0;
}

void DFS(int x)
{
	int j;
	
	cout<<" \n "<<x;
	visited[x] = 1;
	
	for(j=0;j<n;j++)
	{
		if(!visited[j] && G[x][j]==1)
		{
			DFS(j);
		}
	}
	
}
