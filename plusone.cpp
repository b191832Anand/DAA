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
    vector<int>v(n);
    for(int i=0;i<digits.end();i++)
    {
    	if(i==digits.size()-1)
    		v[i]=digits[i]+1;
    	else
    		v[i]=digits[i];
    }
    for(auto &i:v)
    	cout<<i<<" ";
}