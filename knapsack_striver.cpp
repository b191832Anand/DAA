#include <bits/stdc++.h>
using namespace std;
class knap
{
public:
	int solve(int index,vector<int>&val,vector<int>&wt,int W){
	if(index==0){
		if(wt[0]<=W)return val[0];
		else return 0;
	}
	int nontake=0+solve(index-1,val,wt,W);
	int take=INT_MIN ;
	if(wt[index]<=W)
		take=val[index]+solve(index-1,val,wt,W-wt[index]);
	return max(nontake,take);
}
};
class memo
{
public:
	int solve(int index,vector<int>&val,vector<int>&wt,int W,vector<vector<int>>&dp){
		if(index==0){
			if(wt[0]<=W)return val[0];
			return 0;
		}
		if(dp[index][W]!=-1)return dp[index][W];
		int nontake=solve(index-1,val,wt,W,dp);
		int take=INT_MIN;
		if(wt[index]<=W)take=val[index]+solve(index-1,val,wt,W-wt[index],dp);
		return dp[index][W]=max(nontake,take);
	}
};
class tabulation
{
public:
	int solve(vector<int>&val,vector<int>&wt,int W,int n){
		vector<vector<int>>dp(n,vector<int>(W+1,0));
		for(int i=wt[0];i<=W;i++)dp[0][i]=val[0];
		 for(int i=1;i<n;i++){
		 	for(int weight=0;weight<=W;weight++){
		 		int nontake=dp[i-1][weight];
		 		int take=INT_MIN;
		 		if(wt[i]<=weight)take=val[i]+dp[i-1][weight-wt[i]];
		 		dp[i][weight]=max(take,nontake);
		 	}
		 }
		 return dp[n-1][W];
	}
};
int main(){
	int n,W;
	cin>>n>>W;
	vector<int>val(n),wt(n);
	for(auto &i:val)
		cin>>i;
	for(auto &i:wt)
		cin>>i;
	cout<<knap().solve(n-1,val,wt,W)<<endl;
	vector<vector<int>>dp(n,vector<int>(W+1,-1));
    cout<<memo().solve(n-1,val,wt,W,dp)<<endlfh ;
    cout<<tabulation().solve(val,wt,W,n);
}