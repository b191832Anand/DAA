#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>a(100);
int fact(int n){

	for(int i=0;i<n+1;i++)
	{
		if(i==0 || i==1)
		{
			a[i]=1;
		}
		else
		{
			a[i]=a[i-1]*i;
		}
		
	}
	return a[n];
}
int main()
{
	int n;
	cin>>n;
	cout<<fact(n)<<endl;
	for(int i=0;i<n+1;i++)
	{
		cout<<a[i]<<" ";
	}
}