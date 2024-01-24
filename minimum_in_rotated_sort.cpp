#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>a(n);
	for(auto &i:a)
		cin>>i;
	int low=0,high=n-1;
	int ans=INT_MAX;
	while(low<=high){
		int mid=(low+high)/2;
		// if(a[low]<=a[high]){
		// 	ans=min(ans,a[low]);
		// 	break;
		// }
		if(a[low]<=a[mid])
		{
			ans=min(ans,a[low]);
			low=mid+1;
		}
		else{
			ans=min(ans,a[mid]);
			high=mid-1;
		}
	}
	cout<<ans;
}