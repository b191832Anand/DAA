#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin>>n;
	vector<int>ans(n);
	for(auto &i:ans)cin>>i;
	unordered_map<int,int>mp;
    for(auto &i:ans)mp[i]++;
    int mex=0,mex1=0,j;
    for(int i=0;i<=n;i++){
    	if(mp[i]==0){
    		mex=i;
    		break;
    	}
    }
   for(int i=0;i<=n;i++){
   	if(mp[i]<=1){
   		j=i;break;
   	}
   }
   for(int i=j+1;i<=n;i++){
   	if(mp[i]<=1){
   		mex1=i;
   		break;
   	}
   }
   cout<<min(mex,mex1)<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--)solve();
}