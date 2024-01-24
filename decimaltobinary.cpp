#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> decimaltobinary(int n)
{
  vector<int>nums;
  while(n>0)
  {
  	int last=n%2;
  	nums.push_back(last);
  	n=n/2;
  }
  return nums;
}
int main()
{
	int n;
	cin>>n;
	vector<int>nums=decimaltobinary(n);
	for(int it=nums.size()-1;it>=0;it--)
		cout<<nums[it]<<" ";
}