#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  int find(int v,vector<int>cost,vector<bool>visited)
  {
  	int min=-1;
  	for(int i=0;i<v;i++)
  	{
  		if(!visited[i] &&(min==-1 || cost[i]<cost[min]))
  			min=i;
  	}
  	return min;
  }
 void dijkstra(vector<vector<int>>&edges,int v)
 {
 	vector<int>cost(v,INT_MAX);
 	vector<bool>visited(v,false);
 	cost[0]=0;
 	for(int i=0;i<v-1;i++)
 	{
 		int min=find(v,cost,visited);
 		visited[min]=true;
 		for(int j=0;j<v;j++)
 		{
 			if(edges[min][j]!=0 && !visited[j])
 			{
 				int temp=cost[min]+edges[min][j];
 				if(temp<cost[j])
 					cost[j]=temp;
 			}
 		}
 	}
 	for(auto &i:cost)
 		cout<<i<<" ";
 }
int main()
{
	int v,e;
	cin>>v>>e;
	vector<vector<int>>edges(v,vector<int>(v,0));
	for(int i=0;i<e;i++)
	{
		int s,d,w;
		cin>>s>>d>>w;
       edges[s][d]=w;
       edges[d][s]=w;
	}
	dijkstra(edges,v);
}