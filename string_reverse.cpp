#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int d=0;
	int e=s.length()-1;
	while(d<=e)
	{
		swap(s[d++],s[e--]);
	}
	cout<<s;
}
