#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>vect(1000,vector<int>(1000));
int countsubset(vector<int>wt,int n,int sum)
{
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=sum;j++)
		{
			if(j==0)
			{
		 vect[i][j]=1;
			}
	  else if(i==0){
				 vect[i][j]=0;
				}
		 else if(wt[i-1]<=j)
			{
			   vect[i][j]=((vect[i-1][j-wt[i-1]])+(vect[i-1][j]));
			}
			else
			{
				vect[i][j]=vect[i-1][j];
			}
		}
	}
	return vect[n][sum];
}
int main()
{
	int n,sum;
	cin>>n>>sum;
  vector<int>wt(n);
  for(auto &i:wt)
  	cin>>i;
     cout<<countsubset(wt,n,sum)<<endl;
     for(int i=0;i<sum+1;i++)
     	cout<<i<<" ";
     cout<<endl;
     for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<sum+1;j++)
		{
			cout<<vect[i][j]<<" ";
		}
		cout<<endl;
	}
}