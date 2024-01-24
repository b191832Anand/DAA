#include <bits/stdc++.h>
using namespace std;
int main(){
	string ch;
	cin>>ch;
	int n=ch.length();
	vector<string>v;
	for(int i=0  ;i<pow(2,n);i++){
		string a="";
		for(int j=0;j<n;j++){
			if(i&(1<<j))a+=ch[j];
		}
		v.push_back(a);
	}
	for(auto &i:v)
	cout<<i<<endl;
}