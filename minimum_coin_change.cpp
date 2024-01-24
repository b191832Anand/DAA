#include <bits/stdc++.h>
using namespace std;
#define end <<endl;
class recurssion
{
public:
 int rec(int index,vector<int>&v,int target){
	if(index==0){
		if(target%v[0]==0)return target/v[0];
		return 1e9;
	}
	int nontake=0+rec(index-1,v,target);
	int take=INT_MAX;
	if(target>=v[index])take=1+rec(index,v,target-v[index]);
	return min(take,nontake);
}
};
class memo
{
public:
	int solve(int index,vector<int>&v,int target,vector<vector<int>>&dp){
		if(index==0){
			if(target%v[0]==0)return target/v[0];
			return 1e9;
		}
		if(dp[index][target]!=-1)return dp[index][target];
		int nontake=solve(index-1,v,target,dp);
		int take=INT_MAX;
		if(target>=v[index])take=1+solve(index,v,target-v[index],dp);
		return dp[index][target]=min(take,nontake);
	}
};
class tabulation
{
public:
	int solve(vector<int>&v,int target,int n){
		vector<vector<int>>dp(n,vector<int>(target+1,0));
		for(int i=0;i<=target;i++){
			if(i%v[0]==0)
			dp[0][i]=i/v[0];
		else dp[0][i]=1e9;
		}
		for(int i=1;i<n;i++){
			for(int j=0;j<=target;j++){
				int nontake=dp[i-1][j];
				int take=1e9;
				if(v[i]<=j)take=1+dp[i][j-v[i]];
				dp[i][j]=min(take,nontake);
			}
		}
		return dp[n-1][target];
	}
};
int main(){
	int n,target;
	cin>>n>>target;
	vector<int>v(n);
	for(auto &i:v)cin>>i;
	cout<<recurssion().rec(n-1,v,target)end;
    vector<vector<int>>dp(n,vector<int>(target+1,-1));
    cout<<memo().solve(n-1,v,target,dp)end;  
    cout<<tabulation().solve(v,target,n)end;  
}