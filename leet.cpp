#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
       int m=INT_MAX;
     void rec(int index,vector<int>&nums,int target,vector<int>&ans)
     {
         if(index==nums.size())
         {   int c=accumulate(ans.begin(),ans.end(),0);
              if(c==target)
              {
                  if(m>ans.size()){
                      m=ans.size();
                  }
              }
             return;
         }
         rec(index+1,nums,target,ans);
         ans.push_back(nums[index]);
         rec(index+1,nums,target,ans);
         ans.pop_back();
     }
    int minSizeSubarray(vector<int>& nums, int target) {
        vector<int>ans;
        rec(0,nums,target,ans);
        if(m==INT_MAX)
            return -1;
        return m;
    }
};
int main(){
  int n;
  cin>>n;
  vector<int>v(n);
  for(auto &i:v)
  cin>>i;
   int target;
   cin>>target;
  cout<<Solution().minSizeSubarray(v,n);   	
}