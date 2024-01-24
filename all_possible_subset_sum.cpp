#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(int index,vector<int>&v,vector<int>&ans,int sum)
{
	if(index==v.size())
	{
		ans.push_back(sum);
		return;
	}
	solve(index+1,v,ans,sum+v[index]);
	solve(index+1,v,ans,sum);
}
int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(auto &i:v)
		cin>>i;
	vector<int>ans;
	solve(0,v,ans,0);
	sort(ans.begin(),ans.end());
	for(auto &i:ans)
		cout<<i<<" ";
}