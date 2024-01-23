#include <bits/stdc++.h>
using namespace std;
#define end <<endl;
class recurssion
{
public:
  int solve(int index1,int index2,string a,string b){
  	if(index1<0 || index2<0)return 0;
  	if(a[index1]==b[index2]){
  		return 1+solve(index1-1,index2-1,a,b);
  	}
  	return max(solve(index1-1,index2,a,b),solve(index1,index2-1,a,b));
  }
};
 class memo
 {
 public:
   int solve(int index1,int index2,string a,string b,vector<vector<int>>&dp){
   	if(index1==0 || index2==0)return 0;
   	if(dp[index1][index2]!=-1)return dp[index1][index2];
   	if(a[index1-1]==b[index2-1]){
   		return dp[index1][index2]=1+solve(index1-1,index2-1,a,b,dp);
   	}
   	return dp[index1][index2]=max(solve(index1-1,index2,a,b,dp),solve(index1,index2-1,a,b,dp));
   }
 };
 class taublation
 {
 public:
 	int solve(string a,string b){
 		int n=a.length();
 		int m=b.length();
    vector<vector<int>>dp(n,vector<int>(m,0));

 	}
 };
int main(){
	string a,b;
	cin>>a>>b;
	int n=a.length();
	int m=b.length();
	cout<<recurssion().solve(n-1,m-1,a,b)end
	vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
	cout<<memo().solve(n,m,a,b,dp)end
	cout<<taublation().solve(a,b);
}