#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<pair<int,int>>v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		v.push_back({x,y});
	}
	for(auto &i:v)
		cout<<i.first<<" "<<i.second<<endl;
}