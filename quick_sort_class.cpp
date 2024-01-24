#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   int partition(vector<int>&nums,int low, int high)
   {
      int pivot=nums[high];
      int i=low-1;
      int j;
      for(int j=low;j<high;j++)
      {
          if(nums[j]<pivot)
          {
              i++;
              swap(nums[i],nums[j]);
          }
      }
      swap(nums[i+1],nums[high]);
      return i+1;
   }
    public: void solve(vector<int>&nums,int low,int high)
     {
        if(low<high)
        {
            int p=partition(nums,low,high);
            solve(nums,low,p-1);
            solve(nums,p+1,high);
        }
     }
   public: vector<int> sortArray(vector<int>& nums) {
        solve(nums,0,nums.size()-1);
        return nums;
    }
};
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &i:v)
        cin>>i;
    vector<int>nums=Solution().sortArray(v);
    for(auto &i:nums)
        cout<<i<<" ";
}