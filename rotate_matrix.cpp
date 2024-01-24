#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>>&ans,int n)
{
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			swap(ans[i][j],ans[j][i]);
		}
	}
	for(int i=0;i<n;i++){
		reverse(ans[i].begin(),ans[i].end());
	}
}
int main()
{
	int n;cin>>n;
	vector<vector<int>>ans(n,vector<int>(n,0));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++){
			cin>>ans[i][j];
		}
	}
	rotate(ans,n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
}