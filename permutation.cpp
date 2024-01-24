#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool issafe(vector<int>&a,int i,int k)
{
	for(int j=0;j<k;j++)
	{
		if(a[j]==i)
			return false;
	}
	return true;
}
void permu(vector<int>&v,vector<int>&a,int k,int n)
{
	if(k==n)
	{
		for(int i=0;i<n;i++)
		{
			cout<<v[a[i]];
		}
		cout<<endl;
		return;
	}
	for(int i=0;i<n;i++)
	{
		if(issafe(a,i,k))
		{
			a[k]=i;
			permu(v,a,k+1,n);
			a.pop_back();
		}
	}
}
void per(vector<int>&v,int n)
{
	vector<int>a(n);
	permu(v,a,0,n);
}
int main()
{
	int n;cin>>n;
	vector<int>v(n);
	for(auto &i:v)
		cin>>i;
	per(v,n);
}