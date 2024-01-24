#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(auto &i:v)
		cin>>i;
	vector<int>ans(n);
	transform(v.begin(),v.end(),ans.begin(),[](int c){return (c == 1) ? 0 : 1;});
	for(auto &i:ans)
		cout<<i<<" ";
}