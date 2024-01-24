#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int todecimal(string s)
 {
 	  unordered_map<char,int>m;
 	  m['I']=1;
 	  m['V']=5;
 	  m['X']=10;
 	  int sum=0;
 	  for(int i=0;i<s.length();i++)
 	  {
 	  	if(m[s[i]]<m[s[i+1]])
 	  	{
        sum+=m[s[i+1]]-m[s[i]];
        i++;
 	  	}
 	  	else
 	  	{
 	  		sum+=m[s[i]];
 	  	}
 	  }
 	  return sum;
 }
int main()
{
	string s;
	cin>>s;
	cout<<todecimal(s);
}