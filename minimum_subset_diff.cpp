#include <bits/stdc++.h>
using namespace std;
bool ss(vector<int>&v,int target,int index){
	if(target==0)return true;
	if(index==0)return (v[0]==target);
	bool nontake=ss(v,target,index-1);
	bool take=false;
	if(target>=v[index])take=ss(v,target-v[index],index-1);
	return take | nontake;
}
int main(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(auto &i:v)cin>>i;
	int sum=0;
   for(int i=0;i<n;i++){
      sum+=v[i];
   }
   	vector<vector<bool>>dp (n,vector<bool>(sum+1,0));
   	int maxi=INT_MAX;
   for(int i=0;i<n;i++){
   	dp[i][0]=true;
   }
   if(v[0]<=sum)dp[0][v[0]]=true;
   for(int i=1;i<n;i++){
   	for(int tar=0;tar<=sum;tar++){
   		bool nontake=dp[i-1][tar];
   		bool take=false;
   		if(tar>=v[i])take=dp[i-1][tar-v[i]];
   		dp[i][tar]=nontake|take;
   	}
   }
   	for(int i=0;i<=sum/2;i++){
       bool a=dp[n-1][i];
       if(a==true){
       	maxi=min(maxi,abs(i-(sum-i)));
       }
   	}
   	cout<<maxi;
}