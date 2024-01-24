#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int prince(int a[][6],int visited[],int n)
{   int value=0;
	for(int l=0;l<n-1;l++)
	{   int min=100;
        int key[n];
        int u,v;
		for(int i=0;i<n;i++)
		{
           if(visited[i]==1)
           {
           	for(int j=0;j<n;j++)
           	{
           		if(visited[j]!=1 && a[i][j]!=0)
           		{
           			if(min>a[i][j])
           			{
           				min=a[i][j];
           				u=i;
           				v=j;
           			}
           			else
           			{
           				a[i][j]=0;
           			}
           		}
           	}
           }
		}
		value=value+min;
		visited[v]=1;
	}
	return value;
}
int main()
{
	int a[][6]={{0,3,0,0,0,7},
	             {3,0,5,4,8,0},
	             {0,5,0,6,0,4},
	             {0,0,6,0,4,0},
	             {0,8,0,4,0,2},
	             {7,0,4,0,2,0}};
	 for(int i=0;i<6;i++)
	 {
	 	for(int j=0;j<6;j++)
	 	{
	 		cout<<a[i][j]<<" ";
	 	}
	 	cout<<endl;
	 }
	 int visited[6];
	 for(int i=0;i<6;i++)
	 {
	 	visited[i]=-1;
	 }
	 visited[0]=1;
	int value=prince(a,visited,6);
	 cout<<"spanning tree"<<endl;
	 float max=0;
	 for(int i=0;i<6;i++)
	 {
	 	for(int j=0;j<6;j++)
	 	{
	 		cout<<a[i][j]<<" ";
	 		max=max+a[i][j];
	 	}
	 	cout<<endl;
	 }
	 cout<<max/2<<endl;
	 cout<<value;
}