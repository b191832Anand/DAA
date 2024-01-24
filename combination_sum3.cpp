#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(int index,vector<vector<int>>&ans,vector<int>&ds,int k,int n){
	if(ds.size()==k)
	{
		if(n==0)
		{
			ans.push_back(ds);
		}
		return;
	}
	for(int i=index;i<=n;i++)
	{
		ds.push_back(i);
		solve(i+1,ans,ds,k,n-i);
		ds.pop_back();
	}
}
int main()
{
	int k,n;
	cin>>k>>n;
	vector<vector<int>>ans;
	vector<int>ds;
	solve(1,ans,ds,k,n);
	for(int i=0;i<ans.size();i++)
	{
		for(int j=0;j<ans[i].size();j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
}