#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 vector<vector<int>>kss(1000,vector<int>(1000,-1));
  int table(vector<int>wt,vector<int>val,int n,int W)
  {
  	for(int i=0;i<=n;i++)
  	{
  		for(int j=0;j<=W;j++)
  		{
  			if(i==0 || j==0)
  			{
  				kss[i][j]=0;
  			}
  		   else if(wt[i-1]<=j)
  			{
  				kss[i][j]=max(val[i-1]+kss[i-1][j-wt[i-1]],kss[i-1][j]);
  			}
  			else
  				kss[i][j]=kss[i-1][j];
  		}
  	}
  	return kss[n][W];
  }
int main()
{
	int n;
	cin>>n;
	vector<int>wt(n),val(n);
	for(auto &i:wt)
		cin>>i;
	for(auto &i:val)
		cin>>i;
	int W;
	cin>>W;
	cout<<table(wt,val,n,W);
}