#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	vector<int>v(n);
	for(auto &i:v)
		cin>>i;
	sort(v.begin(),v.end());
	cout<<v[n-k];
}