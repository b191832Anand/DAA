#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isanagram(string t,string g){
    vector<int>a(26,0),b(26,0);
    for(int i=0;i<t.length();i++)
    {
        a[t[i]-'a']++;
    }
    for(int i=0;i<g.length();i++){
       b[g[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}
int main()
{
  string t;
  string g;
  cin>>t>>g;
  cout<<isanagram(t,g);  
}
