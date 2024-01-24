#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> vect(1000,vector<int>(1000));
int ks(vector<int>&val,vector<int>&wt,int n,int W)
{
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=W;j++)
		{
			if(i==0 || j==0)
				vect[i][j]=0;
			else if(wt[i-1]<=j)
				vect[i][j]=max(val[i-1]+vect[i-1][j-wt[i-1]],vect[i-1][j]);
			else vect[i][j]=vect[i-1][j];
		}
	}
	return vect[n][W];
}
int main()
{
	int n,W;
	cin>>n>>W;
	vector<int>val(n),wt(n);
	for(auto &i:val)
		cin>>i;
	for(auto &i:wt)
		cin>>i;
	int v=ks(val,wt,n,W);
	cout<<v;
}