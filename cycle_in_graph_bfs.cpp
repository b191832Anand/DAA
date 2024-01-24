#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool bfs(vector<int> graph[],int v,vector<bool>&visited)
{
	visited[v]=1;
	queue<pair<int,int>>q;
   q.push({v,-1});
   while(!q.empty())
   {
   	int node=q.front().first;
   	int parent=q.front().second;
   	q.pop();
   	 for(auto &i:graph[node])
   	 {
   	 	if(!visited[i])
   	 	{
   	 		visited[i]=1;
           q.push({i,node});
   	 	}
   	 	else if(i!=parent)
   	 		return true;
   	 }
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
	cout<<bfs(graph,0,visited);
}