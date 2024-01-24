#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int>graph[],int v,vector<bool>&visited)
{
	visited[v]=true;
	cout<<v<<endl;
	for(auto &i:graph[v])
	{
		  if(visited[i]==false)
		dfs(graph,i,visited);
    }
}

int main()
{
	int v,e;
	cin>>v>>e;
	vector<int>graph[v];
	for(int i=0;i<e;i++)
	{
		int u,v;
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	vector<bool>visited(v,false);
	visited[0]=true;
    dfs(graph,0,visited);
}