#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int v,e;
	cin>>v>>e;
	vector<vector<int>>edges(v);
	for(int i=0;i<e;i++)
	{
		int u,v;
		cin>>u>>v;
		edges[u].push_back(v);
		edges[v].push_back(u);
	}
	  for(int i=0;i<edges.size();i++)
	  {
	  	for(int j=0;j<edges[i].size();j++)
	  	{
	  		cout<<edges[i][j]<<" ";
	  	}
	  	cout<<endl;
	  }
	    unordered_map<int,vector<int>>umap;
	    for(int i=0;i<v;i++)
	    {
	       int u=edges[i][0];
	       int v=edges[i][1];
	       umap[u].push_back(v);
	       umap[v].push_back(u);
	    }
	      vector<bool>visited(v,false);
	      visited[0]=true;
	      queue<int>q;
	      q.push(0);
	      while(!q.empty()){
	      	int p=q.front();
	      	q.pop();
	      	vector<int>temp=edges[p];
	      	for(int i=0;i<temp.size();i++)
	      	{
	      		if(visited[temp[i]]==false)
	      		{
	      			visited[temp[i]]==true;
	      			q.push(temp[i]);
	      		}
	      	}
	      }  
	      cout<<visited[2];
}