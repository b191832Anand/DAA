#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(int index,vector<int>&v,vector<vector<int>>&ans,vector<int>&ds,int n,int target)
{
	if(index==n)
	{
		if(target==0)
		{
			ans.push_back(ds);
		}
		return;
	}
	if(v[index]<=target){
		ds.push_back(v[index]);
		solve(index,v,ans,ds,n,target-v[index]);
		ds.pop_back();
	}
	solve(index+1,v,ans,ds,n,target);
}
int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(auto &i:v)
		cin>>i;
	vector<vector<int>>ans;
	vector<int>ds;
	int target;
	cin>>target;
	solve(0,v,ans,ds,n,target);
	for(int i=0;i<ans.size();i++)
	{
		for(int j=0;j<ans[i].size();j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
}