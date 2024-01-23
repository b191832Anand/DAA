#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	unordered_map<char,int>umap;
	for(int i=0;i<s.length();i++){
		umap[s[i]]++;
	}
	if(umap.size()&1)
		cout<<"IGNORE HIM!";
	else
		cout<<"CHAT WITH HER!";
	return 0;
}