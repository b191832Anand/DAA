#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 void merge(vector<int>&nums1,vector<int>&nums2)
 {
 	int l1=nums1.size();
 	int l2=nums2.size();
 	int i=0,j=0,k=0;
 	vector<int>v;
 	while(j<l2 &&i<l1)
 	{
 		if(nums1[i]>nums2[j])
 		{
 			v[k]=nums2[j];
 			j++;
 		}
 		else
 		{
 			v[k]=nums1[i];
 			i++;
 		}
 		k++;
 	}
 	while(i<l1)
 	{
 		v[k]=nums1[i];
 		i++;
 		k++;
 	}
 	while(j<l2)
 	{
 		v[k]=nums2[j];
 		j++;
 		k++;
 	}
 	for(auto &i:v)
 		cout<<i<<" ";
 }
int main()
{
  int n,m;
  cin>>n>>m;
  vector<int>nums1(n),nums2(m);
  for(auto &i:nums1)
  cin>>i;
  for(auto &i:nums2)
  cin>>i;	
  merge(nums1,nums2);
}