#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,t,res;
	cin>>s>>t>>res;
	int l=s.length();
	int r=t.length();
	int len=res.length();
	int flag=0;
	if((l+r)!=len) cout<<"NO";
	else{
		int i=0,j=0,k=0;
		while(k<len)
		{
			if(i<l &&s[i]==res[k])
				i++;
			else if(j<r && t[j]==res[k])
				j++;
			else{
				flag=1;
				break;
			}
			k++;
		}
		if(flag==1)
		cout<<"NO";
	else
		cout<<"Yes";
	}
}