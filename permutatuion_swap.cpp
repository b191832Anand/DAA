#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>&nums,vector<vector<int>>&ans,int index,int n)
{
	if(index==n){
		ans.push_back(nums);
		return;
	}
	for(int i=index;i<n;i++)
	{
		swap(nums[i],nums[index]);
		solve(nums,ans,index+1,n);
		swap(nums[i],nums[index]);
		// back tracking after completion of index==n
		// rearrange the as it is 
	}
}
int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(auto &i:v)
		cin>>i;
	vector<vector<int>>ans;
	solve(v,ans,0,n);
	for(auto &i:ans)
	{
		vector<int>temp=i;
		for(auto &t:temp)
			cout<<t<<" ";
		cout<<endl;
	}
}