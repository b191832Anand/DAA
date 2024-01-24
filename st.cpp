#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  set<int>st;
  vector<int>v(n);
  for(auto &i:v)
  cin>>i;
  for(auto i=v.begin();i!=v.end();i++)
  {
  	st.insert((*i));
  }	
    for(auto &i:st)
    	cout<<i<<" ";
}