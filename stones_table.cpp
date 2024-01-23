#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<char>v(n);
	for(auto &i:v)
		cin>>i;
	int cnt=0;	
	for(int i=0;i<n;i++){
		if(v[i]==v[i+1])cnt++;
	}
	cout<<cnt;
}