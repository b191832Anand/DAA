#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int lcs(string a,string b)
{
	if(a.length()==0 || b.length()==0)
		 return 0;
		else if(a[0]==b[0])
		{
			return 1+lcs(a.substr(1),b.substr(1));
		}
		else
			return max(lcs(a.substr(1),b),lcs(a,b.substr(1)));
}
int main()
{
	string a;
	cin>>a;
	string b;
	cin>>b;
	cout<<lcs(a,b);
}