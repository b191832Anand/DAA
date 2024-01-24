#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool subsetsum(vector<int>wt,int n,int sum)
{
	if(sum==0)
		return true;
	if(n==0)
		return false;
	if(wt[n-1]<=sum)
	{
		return (subsetsum(wt,n-1,sum-wt[n-1])||subsetsum(wt,n-1,sum));
	}
	else{
		return subsetsum(wt,n-1,sum);
	}
}
bool equalsum(vector<int>wt,int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+wt[i];
	}
	cout<<sum<<endl;
	int x=sum%2;
	if(x!=0)
		return false;
	else
		return subsetsum(wt,n,sum/2);
}
int main()
{
	int n;
	cin>>n;
	vector<int>wt(n);
	for(auto &i:wt)
		cin>>i;
	cout<<equalsum(wt,n);
}