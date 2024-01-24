#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> posnegint(int a[],int n)
{
	vector<int>v,ans;
	map<int,int>mp;
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			v.push_back(a[i]);
		}
		else
		{
			mp[a[i]]++;
		}
	}
	sort(v.begin(),v.end());
	for(int i=v.size()-1;i>=0;i--)
	{
		int data=abs(v[i]);
		if(mp[data]>0)
		{
			ans.push_back(v[i]);
			ans.push_back(data);
			mp[data]-=1;
		}
	}
	return ans;
}
int main()
{
	  vector<int>v;
	int a[]={-3,-2,-1,0,1,2,3};
	int n=sizeof(a)/sizeof(a[0]);
	v=posnegint(a,n);
	for(auto &i:v)
	{
		cout<<i<<" ";
	}
}