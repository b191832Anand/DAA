#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  const int N=1e5+10;
  vector<int>graph[N];
  vector<bool>visited(N,false);
  vector<vector<int>>cc;
  vector<int>current_cc;
  // cc is the connected components
  // cc is store the vector of the connected graph
  void dfs(int v)
  {
  	visited[v]=true;
  	current_cc.push_back(v);
  	for(auto &i:graph[v])
  	{
  		if(visited[i])continue;
  		dfs(i);
  	}
  }
int main()
{
  int v,e;
  cin>>v>>e;
  for(int i=0;i<e;i++)
    {
    	int s,d;
    	cin>>s>>d;
    	graph[s].push_back(d);
    	graph[d].push_back(s);
    }	
    int count=0;
    for(int i=0;i<v;i++)
    {     current_cc.clear();
        if(visited[i]==false)
        {  
        	count++;
        	dfs(i);
        	cc.push_back(current_cc);
        }
    }
    cout<<count<<endl;
    // for printing the cc matrix
    for(auto &i:cc)
    {
    	for(auto &j:i)
    	{
    		cout<<j<<" ";
    	}
    	cout<<endl;
    }
    // or to find the no of connected graph we find the size of the cc matrix
    cout<<cc.size();
}
