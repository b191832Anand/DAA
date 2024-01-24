#include<bits/stdc++.h>
using namespace std;
int solve(int n,vector<vector<int>>&dp){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==0 && j==0){
				dp[i][j]=1;
			}
			else{
				int up=0,left=0;
				if(i>0) up=dp[i-1][j];
				if(j>0) left=dp[i][j-1];
				dp[i][j]=up+left;
			}
		}
	}
	return dp[n-1][n-1];
}
int main(){
   int n;
   cin>>n;
   vector<vector<int>>dp(n,vector<int>(n,0));
   cout<<solve(n,dp)<<endl;
   for(int i=0;i<n;i++){
   	for(int j=0;j<n;j++){
   		cout<<dp[i][j]<<" ";
   	}
   	cout<<endl;
   }
}