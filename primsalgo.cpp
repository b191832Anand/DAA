#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int minvertex(vector<bool>&visited,vector<int>&weight,int v)
{
	int m=-1;
	for(int i=0;i<v;i++)
	{
		if(visited[i]!=true && (m==-1 || weight[i]<weight[m]))
			m=i;
	}
	return m;
}
void prims(vector<vector<int>>&edges,vector<bool>&visited,vector<int>&weight,vector<int>&parent,int v)
{
	for(int i=0;i<v-1;i++)
	{
		int p=minvertex(visited,weight,v);
		visited[p]=true;
		for(int j=0;j<v;j++)
		{
			 if(edges[p][j]!=0 && visited[j]!=true)
			 {
			 	if(edges[p][j]<weight[j])
			 	{
			 		weight[j]=edges[p][j];
			 		parent[j]=p;
			 	}
			 }
		}
	}
}
int main()
{
	int v,e;cin>>v>>e;
	vector<vector<int>> edges(v,vector<int>(v,0));
	for(int i=0;i<e;i++)
	{
		int s,d,W;cin>>s>>d>>W;
		edges[s][d]=W;
		edges[d][s]=W;
	}
	vector<bool>visited(v,false);
	vector<int>weight(v,INT_MAX);
	vector<int>parent(v);
	weight[0]=0;
	parent[0]=-1;
	prims(edges,visited,weight,parent,v);
	for(int i=0;i<v;i++)
	{
		cout<<i<<" "<<parent[i]<<" "<<weight[i]<<endl;
	}
}