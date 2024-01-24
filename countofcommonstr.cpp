#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	string t;
	cin>>s>>t;
  int a[26]={0};
        int b[26]={0};
        int l1=s.length();
        int l2=t.length();
        int flag=0;
        if(l1>=l2)
        {
        for(int i=0;i<l1;i++)
        {
            a[s[i]-'a']++;
            b[t[i]-'a']++;
        }
    }
    else
    {
    	 for(int i=0;i<l2;i++)
        {
            a[s[i]-'a']++;
            b[t[i]-'a']++;
        }
    }
        for(int i=0;i<26;i++)
        {
        	if(a[i]==b[i] && a[i]!=0)
        	{
        		flag=flag+a[i];
        	}
       }    
         cout<<flag;
}