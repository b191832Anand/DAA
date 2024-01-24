#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isanagram(string t,string g){
	map<int,int>umap,imap;
        for(int i=0;i<t.length();i++){
        	umap[t[i]-'a']++;
        }
        for(int i=0;i<g.length();i++){
        	imap[g[i]-'a']++;
        }
        for(int i=0;i<umap.size();i++){
        	if(umap[i]!=imap[i])
        		return false;
        }
        return true;
}
int main()
{
	string t,g;cin>>t>>g;
	cout<<isanagram(t,g);
}