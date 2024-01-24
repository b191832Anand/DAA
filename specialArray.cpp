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
	sort(v.begin(),v.end());
	for(auto &i:v)
		cout<<i<<" ";
	cout<<endl;
	int cur=0;
	for(int j=0;j<=n;++j)
	{
		while(cur<n &&v[cur]<j)
		{
			++cur;
		}
		if(n-cur==j){
			cout<<j;
			break;
		}
	}
	return -1;
}