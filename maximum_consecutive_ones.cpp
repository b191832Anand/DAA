#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;vector<int>v(n),ans;
	for(auto &i:v)
		cin>>i;
	 int count=0;
	 int temp=INT_MIN;
	 for(int i=0;i<n;i++)
	 {
	 	if(v[i]==1){
	 		count++;
	 	}
	 	else{
	 		count=0;
	 	}
	 	temp=max(count,temp);
	 }
	 cout<<temp;
}