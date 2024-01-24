#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int>graph[N];
vector<bool>visited(N,false);
void dfs(int v)
{     
	  if(visited[v])
	  	return;
	 cout<<v<<endl;
      visited[v]=true;
      for(auto &i:graph[v])
      {
      	dfs(i);
      }
}
int main()
{
	int v,e;
	for(int i=0;i<e;i++)
	{
		int s,d;
		cin>>s>>d;
		graph[s].push_back(d);
		graph[d].push_back(s);
	}
	dfs(0);
}