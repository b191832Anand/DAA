#include <bits/stdc++.h>
using namespace std;
bool ss(vector<int>&v,int target,int index){
	if(target==0)
		return true;
	if(index==0) return(v[0]==target);
	bool nontake=ss(v,target,index-1);
	bool take=false;
	if(v[index]<=target)
		take=ss(v,target-v[index],index-1);
	return take | nontake;
}
bool memo(vector<int>&v,int target,int index,vector<vector<int>>&dp){
	if(target==0)return true;
	if(index==0)return (v[0]==target);
	if(dp[index][target]!=-1)return dp[index][target];
	bool nontake=memo(v,target,index-1,dp);
	bool take=false;
	if(target>=v[index])
		take=memo(v,target-v[index],index-1,dp);
	return dp[index][target]= nontake|take;
}
int main(){
	int n,target;
	cin>>n>>target;
	vector<int>v(n);
	for(auto &i:v)
		cin>>i;
	cout<<ss(v,target,n-1)<<endl;
	vector<vector<int>>dp(n,vector<int>(target+1,-1));
	cout<<memo(v,target,n-1,dp)<<endl;
	vector<vector<bool>>tabu(n,vector<bool>(target+1,0));
	for(int index=0;index<n;index++)
		tabu[index][0]=true;
	  if(v[0]<=target) tabu[0][v[0]]=true;
	  for(int i=1;i<n;i++){
	  	for(int tar=0;tar<=target;tar++){
	  		bool nontake=dp[i-1][tar];
	  		bool take=false;
	  		if(tar>=v[i])
	  			take=dp[i-1][tar-v[i]];
	  		tabu[i][tar]=nontake|take;
	  	}
	  }
  cout<<tabu[n-1][target];
}