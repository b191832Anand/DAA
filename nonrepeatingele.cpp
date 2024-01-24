#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int nonrepeating(int a[],int n)
{
	unordered_map<int,int>mp;
	for(int i=0;i<n;i++)
	{
		int key=a[i];
		mp[key]++;
	}
	for(int i=0;i<n;i++)
	{
		int val=a[i];
		auto it=mp.find(val);
		if(it->second==1)
		{
			return val;
		}
	}
	return 0;
}
int main()
{
	int a[]={1,2,3,4,5,1,1,3,4,5,6,2};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<nonrepeating(a,n);
}