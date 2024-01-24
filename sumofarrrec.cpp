#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sum(vector<int>v,int n)
{
	if(n<0)
	{
		return 0;
	}
	else
	{
		return v[n]+sum(v,n-1);
	}
}
int main()
{
  int n;
  cin>>n;
  vector<int>v(n);
  for(auto &i:v)
  cin>>i;
  cout<<sum(v,n-1)<<endl;
  for(int i=0;i<n;i++)
  {
  	cout<<v[i]<<" ";
  }	
}