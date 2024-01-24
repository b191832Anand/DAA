#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int subset(vector<int>wt,int n,int sum)
{
	if(sum==0)
		return 1;
	if(n==0)
		return 0;
	if(wt[n-1]<=sum)
	{
		return (subset(wt,n-1,sum-wt[n-1])+subset(wt,n-1,sum));
	}
	else
	{
		return subset(wt,n-1,sum);
	}
}
int main()
{
	int n,sum;
	cin>>n>>sum;
	vector<int>wt(n);
	for(auto &i:wt)
		cin>>i;
	cout<<subset(wt,n,sum);
}