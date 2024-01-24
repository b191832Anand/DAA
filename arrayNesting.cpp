#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&v)
{
	int m=INT_MIN;
	for(int i=0;i<v.size();i++)
	{
		int count=0;
		for(int k=i;v[k]>=0;count++)
		{
			int ak=v[k];
			v[k]=-1;
			k=ak;
		}
		m=max(m,count);
	}
	return m;
}
int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(auto &i:v)
		cin>>i;
	cout<<solve(v);
}