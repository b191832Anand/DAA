#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	vector<int>v;
	for(int i=0;i<s.length();i++){
		if(s[i]>='0' && s[i]<='9'){
			int a=s[i]-'0'+0;
			v.push_back(a);
		}
	}
	sort(v.begin(),v.end());
	string ans="";
    for(int i=0;i<v.size();i++){
    	char c=v[i]+'0';
    	ans+=c;
    	if(i!=v.size()-1){
    		ans+='+';
    	}
    }
    cout<<ans;
}