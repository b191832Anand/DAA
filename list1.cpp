#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	list<int>l;
	for(int i=0;i<6;i++)
	{
		int x;
		cin>>x;
		l.push_back(x);
	}
	for(auto &i:l)
		cout<<i<<endl;
    for(auto it=l.begin();it!=l.end();it++)
    {
    	cout<<*it<<endl;
    }
}