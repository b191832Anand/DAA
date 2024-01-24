#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int cc(vector<int>v,int n,int W)
{
	if(W==0)
		return 1;
	 if(n==0)
		return 0;
   if(v[n-1]<=W)
   {
	return cc(v,n-1,W)+cc(v,n,W-v[n-1]);
  }
  else
  {
  	return  cc(v,n-1,W);
  }
}
int main()
{
	int n,W;
	cin>>n>>W;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int data;
		cin>>data;
		v.push_back(data);
	}
	cout<<cc(v,n,W);
}