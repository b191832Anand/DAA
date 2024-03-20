#include<bits/stdc++.h>
using namespace std;
bool issorted(vector<int>&nums){
	vector<int>ans(nums.begin(),nums.end());
	sort(ans.begin(),ans.end());
	return ans==nums;
}
void solve(){
	int n;cin>>n;
	vector<int>nums(n);
	for(auto &i:nums)cin>>i;
	if(issorted(nums)){
		cout<<"YES"<<endl;
		return;
	}
   vector<int>ans;
   int index=-1;
   for(int i=n-1;i>0;i--){
       if(nums[i]<nums[i-1]){
       	index=i;
       	break;
       }
   }
   for(int i=0;i<index;i++){
   	 if(nums[i]<10)ans.push_back(nums[i]);
   	 else{
   	 	ans.push_back(nums[i]/10);
   	 	ans.push_back(nums[i]%10);
   	 }
   }
   for(int i=index;i<n;i++)ans.push_back(nums[i]);
   if(issorted(ans)){
   	cout<<"YES"<<endl;
   	return ;
   }
   cout<<"NO"<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--)solve();
}