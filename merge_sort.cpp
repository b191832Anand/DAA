#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void mergesort(vector<int>&v,int low,int mid,int high)
{
	vector<int>merged(low+high+1);
	int a=low;
	int b=mid+1;
	int k=0;
	while(a<=mid && b<=high)
	{
		if(v[a]<=v[b])
			merged[k++]=v[a++];
		else
			merged[k++]=v[b++];
	}
	while(a<=mid)
		merged[k++]=v[a++];
	while(b<=high)
		merged[k++]=v[b++];
  for(int i=0,j=low;i<merged.size();i++,j++)
  {
  	v[j]=merged[i];
  }
}
void merge(vector<int>&v,int low,int high)
{
	 if(low<high)
	 {
	 	int mid=(low+high)/2;
	 	merge(v,low,mid);
	 	merge(v,mid+1,high);
	 	mergesort(v,low,mid,high);
	 }
}
int main()
{
	int n;cin>>n;
	vector<int>v(n);
	for(auto &i:v)
		cin>>i;
	merge(v,0,n-1);
	for(auto &i:v)
		cout<<i<<" ";
}