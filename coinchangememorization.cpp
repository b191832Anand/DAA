#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>nums(1000,vector<int>(1000,-1));
 int cc(vector<int>v,int n,int sum)
 {
 	if(sum==0)
 	{
 		return nums[n][sum]=1;
 	}
 	if(n==0)
 	{
 		return nums[n][sum]=0;
 	}
 	if(nums[n][sum]!=-1)
 		return nums[n][sum];
 	if(v[n-1]<=sum)
 	{
 		return nums[n][sum]=cc(v,n-1,sum)+cc(v,n,sum-v[n-1]);
 	}
 	else
 	{
 		return nums[n][sum]=cc(v,n-1,sum);
 	}
 }
int main()
{
	int n,W;
	cin>>n>>W;
	vector<int>v(n);
	for(auto &i:v)
		cin>>i;
	cout<<cc(v,n,W)<<endl;
	for(int i=0;i<W;i++)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<W+1;j++)
		{
			cout<<nums[i][j]<<" ";
		}
		cout<<endl;
	}
 }
