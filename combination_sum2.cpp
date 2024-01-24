#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(int index,int target,vector<vector<int>>&ans,vector<int>&ds,vector<int>&v)
{
	if(index==v.size())
	{
		if(target==0)
		{
			if(find(ans.begin(),ans.end(),ds)==ans.end())
			{
				ans.push_back(ds);
			}
		}
		return;
	}
	 if(v[index]<=target)
	 {
	 	ds.push_back(v[index]);
	 	solve(index+1,target-v[index],ans,ds,v);
	 	ds.pop_back();
	 }
	   solve(index+1,target,ans,ds,v);
}
int main()
{
	int n,target;
	cin>>n;
	vector<int>v(n);
	for(auto &i:v)
		cin>>i;
	cin>>target;
	vector<vector<int>>ans;
	vector<int>ds;
	solve(0,target,ans,ds,v);
	for(int i=0;i<ans.size();i++)
	{
		for(int j=0;j<ans[i].size();j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
}