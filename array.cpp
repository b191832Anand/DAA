#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(auto &i:v)
		cin>>i;
	//vector<pair<int,int>>v(n);
	// for(auto &i:v)
	// 	cin>>i.first>>i.second;
	// sort(v.begin(),v.end(),[&](const auto&a,const auto&b){
	// 	return a.first/a.second<b.first/b.second;
	// });
	// for(auto &i:v)
	// 	cout<<i.first<<" "<<i.second<<endl;
	auto it=min_element(v.begin(),v.end());
	cout<<*it<<endl;
	if(n%2!=0)
		n=n-1;
     for(int i=0;i<n;i=i+2)
     {
     	swap(v[i],v[i+1]);
     }
     for(auto &i:v)
     	cout<<i<<" ";
}