#include<bits/stdc++.h>
using namespace std;
 int partition(vector<int>&v,int low,int high)
 {
 	int pivot=v[high];
 	int i=low-1;
 	int j;
 	for(j=low;j<high;j++)
 	{
 		if(v[j]<pivot)
 		{
 			i++;
 			swap(v[i],v[j]);
 		}
 	}
 	swap(v[i+1],v[high]);
 	return i+1;
 }
 void quick(vector<int>&v,int low,int high)
 {
 	if(low<high)
 	{
 		int pi=partition(v,low,high);
 		quick(v,low,pi-1);
 		quick(v,pi+1,high);
 	}
 }
int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(auto &i:v)
		cin>>i;
	quick(v,0,n-1);
	for(auto &i:v)
		cout<<i<<" ";
}