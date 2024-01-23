#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long cnt=0;
	while(n){
		int l=n%10;
		if(l==7 || l==4)cnt++;
		n=n/10;
	}
	if(cnt==4 || cnt==7){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}