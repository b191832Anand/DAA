#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,i=1;cin>>n;
	while(i<=n){
		if(i==n){
			cout<<i<<endl;
			return ;
		}
		cout<<i<<" ";
		cout<<n<<" ";
		i++;
		n--;
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--)solve();
}