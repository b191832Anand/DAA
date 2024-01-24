#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>v(100);
int fact(int n)
{
	if(n==1 || n==0)
		return v[n]=1;
	else
		return v[n]=n*fact(n-1);
}
int main()
{
	int n;
	cin>>n;
	cout<<fact(n)<<endl;
	for(int i=0;i<n+1;i++)
		{ cout<<v[i]<<" ";
}
}