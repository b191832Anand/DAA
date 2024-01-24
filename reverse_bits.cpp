#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ans=0;
	for(int i=0;i<32;i++)
	{
		if(n&(1<<i))
		   ans=ans|(1<<(32-i));
	}
	cout<<ans;
}