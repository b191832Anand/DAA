#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void quicksort(vector<int>&v,int low,int high)
{
	if(low>=high)
		return;
	int pivot=v[high];
	int i=low;
	int j=high-1;
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
		swap(v[i],v[high]);
		quicksort(v,low,i-1);
		quicksort(v,i+1,high);
	}
}
int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(auto &i:v)
		cin>>i;
	cout<<"anand"<<endl;
	quicksort(v,0,n-1);
	for(auto &i:v)
		cout<<i<<" ";
}