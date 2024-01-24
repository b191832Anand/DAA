#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int intersection(int a[],int n,int b[],int m)
 {
    unordered_map<int,int>mp;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
    	int key=a[i];
    	mp[key]++;
    }
    for(int i=0;i<m;i++)
    {
    	int val=b[i];
    	mp[val]++;
    }
    for(auto it=mp.begin();it!=mp.end();it++)
    {   
    	int num=it->second;
    	int num1=it->first;
    	if(num==2)
    	{
            v.push_back(num1);
    	}
    }
    return v.size();
 }
int main()
{
  int a[]={1,2,3,4,5};
	int b[]={1,2,3,4,5,6,7,8,9,10};
	int n=sizeof(a)/sizeof(a[0]);
	int m=sizeof(b)/sizeof(b[0]);
	vector<int>v;
	cout<<intersection(a,n,b,m);
}