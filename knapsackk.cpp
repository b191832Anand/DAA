#include<bits/stdc++.h>
using namespace std;
class recursion
{
public:
	int knap(int index,vector<int>&val,vector<int>&wt,int W){
	if(index==0){
		if(wt[0]<=W)return val[0];
	    return 0;
	}
	int nontake=0+knap(index-1,val,wt,W);
	int take=INT_MIN;
	if(wt[index]<=W)
		take=val[index]+knap(index-1,val,wt,W-wt[index]);
	return max(take,nontake);
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
      int nontake=0+solve(index-1,val,wt,W,dp);
      int take=INT_MIN;
      if(wt[index]<=W)
      	take=val[index]+solve(index-1,val,wt,W-wt[index],dp);
      return dp[index][W]=max(take,nontake);
  }
};
  class tabulation
  {
  public:
  	int solve(int n,int W,vector<int>&val,vector<int>&wt,vector<vector<int>>&dp)
  	{
       for(int i=wt[0];i<=W;i++)dp[0][i]=val[0];
       	for(int i=1;i<n;i++){
       		for(int j=0;j<=W;j++){
       			int nontake=0+dp[i-1][j];
       			int take=INT_MIN;
       			if(wt[i]<=j)
       				take=val[i]+dp[i-1][j-wt[i]];
       			dp[i][j]=max(take,nontake);
       		}
       	}
       	return dp[n-1][W];
  	}
  };
  class space
  {
  public:
  	int solve(int n,int W,vector<int>&val,vector<int>&wt){
  	    vector<int>prev(W+1,0),cur(W+1,0);
  	    for(int i=wt[0];i<=W;i++)
  	    	prev[i]=val[0];
  	    for(int i=1;i<n;i++){
  	    	for(int j=0;j<=W;j++){
  	    		int nontake=0+prev[j];
       			int take=INT_MIN;
       			if(wt[i]<=j)
       				take=val[i]+prev[j-wt[i]];
       			cur[j]=max(take,nontake);
  	    	}
  	    	prev=cur;
  	    }
  	    return prev[W];
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
   //cout<<knap(n-1,val,wt,W); 
   // vector<vector<int>>dp(n,vector<int>(W+1,-1));
   vector<vector<int>>dp(n,vector<int>(W+1,0));
   // cout<<memo().solve(n-1,val,wt,W,dp);
   cout<<tabulation().solve(n,W,val,wt,dp)<<endl;
   cout<<space().solve(n,W,val,wt);
}