#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int solve(vector<int>&v,int n)
 {
 	int c=(n/3)+1;
 	cout<<c<<endl;
 	unordered_map<int,int>umap;
 	for(int i=0;i<n;i++)
 	{
 		umap[v[i]]++;
 		if(umap[v[i]]==c)
 		{
 			return v[i];
 		}
 	}
 	for(auto &i:umap){
 		cout<<i.first<<" "<<i.second<<endl;
 	}
 	return -1;
 }
int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(auto &i:v)
		cin>>i;
	cout<<solve(v,n);
}