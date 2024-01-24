#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int intersection(int a[],int n,int b[],int m)
{
	unordered_set<int>s;
	int c=0;
	for(int i=0;i<n;i++)
	{
		int key=a[i];
		s.insert(key);
	}
	for(int i=0;i<m;i++)
	{
		int val=b[i];
		auto it=s.find(val);
		if(it!=s.end())
		{
			c++;
		}
	}
	return c;
}
int main()
{
	int a[]={1,2,3,4,5,6};
	int b[]={1,2,3,4,5,6,7,8,9,10};
	int n=sizeof(a)/sizeof(a[0]);
	int m=sizeof(b)/sizeof(b[0]);
	vector<int>v;
	cout<<intersection(a,n,b,m);
}