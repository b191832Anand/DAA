#include<bits/stdc++.h>
using namespace std;
int main(){
	long long ans=0;
	int n;
	cin>>n;
	vector<int>v(n);
	for(auto &i:v)
		cin>>i;
	for(int i=0;i<32;i++)
	{
		long long count1=0;
		long long count0=0;
		for(int j=0;j<n;j++)
		{
			if(v[j]&(1<<i))
				count1++;
			else count0++;
		}
		ans+=(count0*count1)*2;
	}
	cout<<ans;
}