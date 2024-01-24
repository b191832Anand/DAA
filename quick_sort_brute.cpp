#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void bruteforce(vector<int>&v,int low,int high){
	if(low>=high)
		return;
	int pivot=v[low];
	int i=low+1;
	int j=high;	
	while(i<=j){
		if(v[i]<=pivot)
			i++;
		else if(v[j]>pivot)
			j--;
		else{
			swap(v[i],v[j]);
			i++;
			j--;
		}
	}
	swap(v[low],v[j]);
	for(auto &k:v)
		cout<<k<<" ";
	cout<<endl;
	bruteforce(v,low,j-1);
	bruteforce(v,j+1,high);
}
int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(auto &i:v)
		cin>>i;
	bruteforce(v,0,n-1);
	for(auto &i:v)
		cout<<i<<" ";
}