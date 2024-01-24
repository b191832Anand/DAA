#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum;
	cin>>n;
	unordered_set<int>s;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{  int x=v[i];
		s.insert(x);
	}
	for(auto &i:s)
		cout<<i<<" "<<endl;
}