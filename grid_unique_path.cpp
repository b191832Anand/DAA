#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(int index,int in,int n,int m,int & count)
{
	if(index==n-1&&in==m-1)
	{
		count++;
		return;
	}
	if(index==n || in==m)
		return ;
	solve(index+1,in,n,m,count);
	solve(index,in+1,n,m,count);
}
int main()
{
	int n,m;cin>>n>>m;
	vector<vector<int>>(n,vector<int>(m));
	int count=0;
	solve(0,0,n,m,count);
	cout<<count;
}