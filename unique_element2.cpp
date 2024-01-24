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
	for(auto &i:v)
		ans^=i;
	//cout<<ans<<endl;
	ans=ans&~(ans-1);
	int a=0,b=0;
	for(auto &i:v)
	{
		if(ans&i){
			a^=i;
			cout<<"a:"<<a<<endl;
		}
		else{
			b^=i;
			cout<<"b:"<<b<<endl;
		}
	}
	cout<<a<<endl;
	cout<<b;
}