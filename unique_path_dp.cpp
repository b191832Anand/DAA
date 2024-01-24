#include<bits/stdc++.h>
using namespace std; 
class memorization
{
public:
	int solve(int i,int j,vector<vector<int>>&dp){
	if(i==0 && j==0)
		return 1;
	if(i<0 || j<0)
		return 0;
	if(dp[i][j]!=-1)return dp[i][j];
	int up=solve(i-1,j,dp);
	int left=solve(i,j-1,dp);
	return dp[i][j]=up+left;
}
};
  class tabulation
  {
  public:
  	int func(int n,vector<vector<int>>&dp){
         for(int i=0;i<n;i++){
         	for(int j=0;j<n;j++){
         		if(i==0 && j==0)
         			dp[i][j]=1;
         		else{
         			int up=0,left=0;
         			if(i>0)up=dp[i-1][j];
         			if(j>0)left=dp[i][j-1];
         			dp[i][j]=up+left;
         		}
         	}
         }
         return dp[n-1][n-1];
  	}
  };
int main(){
     int n;
     cin>>n;
     vector<vector<int>>dp(n,vector<int>(n,-1));
    // cout<<memorization().solve(n-1,n-1,dp);
     cout<<tabulation().func(n,dp)<<endl;
     for(int i=0;i<n;i++){
     	for(int j=0;j<n;j++){
     		cout<<dp[i][j]<<" ";
     	}
     	cout<<endl;
     }
     cout<<"anand";
}