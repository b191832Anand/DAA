#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<vector<int>>v(n,vector<int>(2));
	for(int i=0;i<n;i++){
		cin>>v[i][0];
		cin>>v[i][1];
	}
	vector<int>nums(2);
	 cin>>nums[0];
	 cin>>nums[1];
	 vector<vector<int>>ans;
	 for(int i=0;i<n;i++){
        if(v[i][0]<=nums[0] && nums[0]<=v[i][1]){
           int a=min(v[i][0],nums[0]);
           int b=max(nums[1],v[i][1]);
           ans.push_back({a,b});
           break;
        }
        ans.push_back(v[i]);
	 }
	 for(auto &i:ans){
	 	for(auto &j:i){
	 		cout<<j<<" ";
	 	}
	 	cout<<endl;
	 }
}