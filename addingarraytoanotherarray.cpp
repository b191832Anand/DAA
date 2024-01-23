#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>v(n),b(n);
	for(auto &i:v)
		cin>>i;
	for(auto &i:b)
		cin>>i;
 v.insert(v.end(),b.begin(),b.end());
 for(auto &i:v)
 	cout<<i<<" ";
}