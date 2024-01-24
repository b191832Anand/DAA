#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{ 
	int n;
	cin>>n;
	vector<int>digits(n);
	for(auto &i:digits)
		cin>>i;
	vector<int>v;
	for(int i=0;i<digits.end();i++)
	{
		if(i==digits.end()-1)
			v.push_back()=digits[i];
		else
			v.push_back()=digits[i];
	}
	for(auto &i:v)
	{
		cout<<i<<" ";
	}
}