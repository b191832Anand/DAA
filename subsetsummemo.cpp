#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>vect(1000,vector<int>(1000,-1));
bool subset(vector<int>wt,int n,int sum)
{
	if(sum==0)
		return vect[n][sum]=true;
	if(n==0)
		return vect[n][sum]=false;
	if(vect[n][sum]!=-1)
		return vect[n][sum];
	if(wt[n-1]<=sum)
		return vect[n][sum]=(subset(wt,n-1,sum-wt[n-1])||subset(wt,n-1,sum));
	else
		return vect[n][sum]=subset(wt,n-1,sum);
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