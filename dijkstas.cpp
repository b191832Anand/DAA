#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  int find(int v,vector<int>&cost,vector<bool>&visited)
  {
  	int minvertex=-1;
  	for(int i=0;i<v;i++)
  	{
  		if(!visited[i]&&(minvertex==-1 || cost[i]<cost[minvertex]))
  		{
  			minvertex=i;
  		}
  	}
  	return minvertex;
  }
 void dijkstra(vector<vector<int>>&edges,int v)
 {
     vector<int>cost(v,INT_MAX);
     vector<bool>visited(v,false);
     cost[0]=0;
     for(int i=0;i<v-1;i++)
     {
     	   int minvertex=find(v,cost,visited);
     	   visited[minvertex]=true;
     	   cout<<minvertex<<endl;
     	   for(int j=0;j<v;j++)
 	   {  
 	     if(edges[minvertex][j]!=0 && !visited[j]){
     	   	int temp=cost[minvertex]+edges[minvertex][j];
     	   	if(temp<cost[j])
     	   	{
     	   		cost[j]=temp;
     	   	}
     	   }
     	   for(auto &i:cost)
     	   	cout<<i<<" ";
            cout<<endl;
       }
     }
     for(int i=0;i<v;i++)
     {
     	cout<<i<<" "<<cost[i]<<endl;
     }
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
	 for(int i=0;i<v;i++)
	 {
	 	for(int j=0;j<v;j++)
	 	{
	 		cout<<edges[i][j]<<" ";
	 	}
	 	cout<<endl;
	 }
	 cout<<endl;
	 dijkstra(edges,v);
}