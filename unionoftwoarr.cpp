#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 vector<int> unionn(int a[],int n,int b[],int m)
 {
 	unordered_set<int>p;
 	for(int i=0;i<n;i++)
 	{
 		p.insert(a[i]);
 	}
 	for(int i=0;i<m;i++)
 	{
 		p.insert(b[i]);
 	}
 	vector<int>v;
 	for(auto it=p.begin();it!=p.end();it++)
 	{
 		v.push_back(*it);
 	}
 	return v;
 }
int main()
{
	int a[]={1,2,3,4,5};
	int b[]={1,2,3,4,5,6,7,8,9,10};
	int n=sizeof(a)/sizeof(a[0]);
	int m=sizeof(b)/sizeof(b[0]);
	vector<int>v;
	v=unionn(a,n,b,m);
	sort(v.begin(),v.end());
	for(auto &i:v)
		cout<<i<<" ";
}