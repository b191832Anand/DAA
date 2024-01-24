#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>vect(1000,vector<int>(1000,-1));
int ks(vector<int>&wt,vector<int>&val,int n,int W)
{
	if(n==0 || W==0)
	{
		return vect[n][W]=0;
	}
	if(vect[n][W]!=-1) 
		return vect[n][W];
	else if(wt[n-1]<=W)
	{
		return vect[n][W]=max(val[n-1]+ks(wt,val,n-1,W-wt[n-1]),ks(wt,val,n-1,W));
	}
	else
		return vect[n][W]=ks(wt,val,n-1,W);

	
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
	cout<<ks(wt,val,n,W)<<endl;
	for(int i=0;i<=W;i++)
		cout<<i<<" ";
	cout<<endl;
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=W;j++)
		{
			cout<<vect[i][j]<<" ";
		}
		cout<<endl;
	}

}