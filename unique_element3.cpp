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
	int ans=0;
	for(int i=0;i<32;i++)
	{
		int count=0;
		for(int j=0;j<n;j++)
		{
            if(v[j]&(1<<i))
            	count++;
		}
		//cout<<"count:"<<count<<endl;
		if(count%3!=0)
		{
            ans=ans|(1<<i);
		}
	}
	cout<<ans;
}