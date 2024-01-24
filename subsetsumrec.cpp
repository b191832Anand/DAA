#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool ss(vector<int>&wt,int n,int sum)
{
	if(sum==0)
		return true;
	if(n==0)
		return false;
	 else if(wt[n-1]<=sum)
	 	return  (ss(wt,n-1,sum-wt[n-1])+ss(wt,n-1,sum));
	 else
	 	return ss(wt,n-1,sum);
}
int main()
{
	int n,sum;cin>>n>>sum;
	vector<int>wt(n);
	for(auto &i:wt)
		cin>>i;
	cout<<ss(wt,n,sum);
}