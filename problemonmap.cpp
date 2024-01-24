#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<string,int>m;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		m[s]++; // m[s]=m[s]+1
	}
	for(auto j:m)
		cout<<j.first<<"  "<<j.second<<endl;;
}