#include <bits/stdc++.h>
using namespace std;
int  solve(int index,vector<int>&v,int target){
	if(target==0)return 1;
	if(index==0){
		if(v[0]==target)return 1;
		return 0;
	}
	int nontake=solve(index-1,v,target);
	int take=0;
    if(target>=v[index]){
    	take=solve(index-1,v,target-v[index]);
    }
    return take+nontake;
}
int main(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(auto &i:v)
		cin>>i;
	int target;
	cin>>target;
	cout<<solve(n-1,v,target);
}