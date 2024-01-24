#include <bits/stdc++.h>
using namespace std;
#define end <<endl;
class recurssion
{
public:
  int solve(int index,int target,vector<int>&val,vector<int>&wt){
   if(index==0){
     return (target/wt[0])*val[0];
   }
    int nontake=solve(index-1,target,val,wt);
    int take=INT_MIN;
    if(wt[index]<=target){
    	take=val[index]+solve(index,target-wt[index],val,wt);
    }
    return max(take,nontake);
  }
};
class memo
{
public:
  int solve(int index,int target,vector<int>&val,vector<int>&wt,vector<vector<int>>&dp){
  	if(index==0){
  		return ((int)target/wt[0])*val[0];
  	}
  	if(dp[index][target]!=-1)return dp[index][target];
  	int nontake=solve(index-1,target,val,wt,dp);
  	int take=0;
  	if(wt[0]<=target){
  		take=val[index]+solve(index,target-wt[index],val,wt,dp);
  	}
  	return dp[index][target]=max(take,nontake);
  }
};
class tabulation
{
public:
   int solve(int n,int target,vector<int>&val,vector<int>&wt){
   	vector<vector<int>>dp(n,vector<int>(target+1,0));
   	for(int i=0;i<=target;i++){
   		dp[0][i]=((int)i/wt[0])*val[0];
   	}
    for(int i=1;i<n;i++){
    	for(int j=0;j<=target;j++){
    		int nontake=dp[i-1][j];
    		int take=INT_MIN;
    		if(wt[i]<=j){
    			take=val[i]+dp[i][j-wt[i]];
    		}
    		dp[i][j]=max(take,nontake);
    	}
    }
    return dp[n-1][target];
   }
};
int main(){
	int n,target;
	cin>>n>>target;
	vector<int>val(n),wt(n);
	for(auto &i:val)cin>>i;
    for(auto &i:wt)cin>>i;
    cout<<recurssion().solve(n-1,target,val,wt)end
    vector<vector<int>>dp(n,vector<int>(target+1,-1));
    cout<<memo().solve(n-1,target,val,wt,dp)end
    cout<<tabulation().solve(n,target,val,wt)end
}