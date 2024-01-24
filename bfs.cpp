#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  void bfs(vector<int>edges[],int v)
  {
     vector<bool>visited(v,false);
     visited[0]=true;
     queue<int>q;
     q.push(0);
     while(!q.empty())
     {
     	int p=q.front();
     	q.pop();
     	cout<<p<<endl;
     	for(auto &i:edges[p])
     	{
     		 
     		if(visited[i]==false)
     		{
     			q.push(i);
     			visited[i]=true;
     		}
     	}
     }
  }
int main()
{
	int v,e;
	cin>>v>>e;
	vector<int>edges[v];
	for(int i=0;i<e;i++)
	{
		int s,d;
		cin>>s>>d;
		edges[s].push_back(d);
		edges[d].push_back(s);
	}
	bfs(edges,v);
}