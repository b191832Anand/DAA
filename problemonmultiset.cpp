#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;
	cin>>t;
while(t--){
	int n,k;
	cin>>n>>k;
	multiset<long long>bags;
	for(int i=0;i<n;i++)
	{
		long long x;
		cin>>x;
		bags.insert(x);
	}
	  long long total_count=0;
	  for(int i=0;i<k;i++)
	  {
	  	auto it=(--bags.end());
         long long candy_count=*it;
         total_count=total_count+candy_count;
         bags.erase(it);
         bags.insert(candy_count/2);
	  }
	  cout<<total_count<<" ";
}
}