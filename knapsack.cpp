#include<bits/stdc++.h>
using namespace std;
int ks(vector<int>&val,vector<int>&wt,int n,int W)
{
	if(n==0||W==0)
		return 0;
	else if(wt[n-1]<=W)
		return max(val[n-1]+ks(val,wt,n-1,W-wt[n-1]),ks(val,wt,n-1,W));
	else 
	return ks(val,wt,n-1,W);
}
int main()
{
	int n,W;
	cin>>n>>W;
	vector<int>wt(n),val(n);
	for(auto &i:val)
		cin>>i;
	for(auto &i:wt)
		cin>>i;
	int v=ks(val,wt,n,W);
	cout<<v;
}