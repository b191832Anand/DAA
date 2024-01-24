#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool dfs(vector<int>graph[],int v,vector<bool>&visited,int parent){
	visited[v]=1;
	for(auto &i:graph[v])
	{
		if(!visited[i])
	     {
	     	if(dfs(graph,i,visited,v))
	     		return true;
	     }
	     else if(i!=parent)
	     	return true;
	}
	return false;
}
int main()
{
	int v,e;
	cin>>v>>e;
	vector<int>graph[v];
	for(int i=0;i<e;i++)
	{
		int u,c;
		cin>>u>>c;
		graph[u].push_back(c);
		graph[c].push_back(u);
	}
	vector<bool>visited(v,false);
	int flag=0;
	for(int i=0;i<v;i++){
		if(!visited[i])
		{
	      if(dfs(graph,i,visited,-1))
	         flag=1;
		}
	}
	cout<<flag;
}