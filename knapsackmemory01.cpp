#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>kss(1000,vector<int>(1000,-1));
int memory(vector<int>wt,vector<int>val,int n,int W)
{
	if(W==0||n==0)
		return kss[n][W]=0;
	  if(kss[n][W]!=-1)
	  	return kss[n][W];
	else if (wt[n-1]<=W)
	{
       return kss[n][W]=max(val[n-1]+memory(wt,val,n-1,W-wt[n-1]),memory(wt,val,n-1,W));
	}
	else
		return kss[n][W]=memory(wt,val,n-1,W);
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
	cout<<memory(wt,val,n,W);
}