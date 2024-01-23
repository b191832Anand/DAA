#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ans=0;
	int cnt=0;
	while(n--){
		int t;
		cin>>t;
        if(ans==t)cnt++;
        ans=t;
	}
	cout<<cnt;
}