#include<bits/stdc++.h>
using namespace std;

void sieve(int n){
	vector<bool>ans(n+1,true);
	for(int i=2;i*i<=n;i++){
		if(ans[i]==1){
			for(int j=i*i;j<=n;j+=i){
				ans[j]=false;
			}
		}
	}
	for(int i=2;i<=n;i++)if(ans[i])cout<<i<<endl;
}
int main(){
	int n;cin>>n;
	sieve(n);
}