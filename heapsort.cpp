#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 void heapify(vector<int>&v,int n,int i)
 {
 	int largest=i;
 	int l=2*i+1;
 	int r=2*i+2;
 	if(l<n && v[l]>v[largest])
 		largest=l;
 	if(r<n && v[r]>v[largest])
 		largest=r;
 	if(largest!=i)
 	{
 		swap(v[largest],v[i]);
 		heapify(v,n,largest);
 	}
 }
 void heapsort(vector<int>&v,int n)
 {
 	for(int i=n/2-1;i>=0;i--)
 	{
 		heapify(v,n,i);
 	}
 	for(int i=n-1;i>=0;i--)
 	{
 		 swap(v[0],v[i]);
 		heapify(v,i,0);
 	}
 }
int main()
{
 int n;cin>>n;
 vector<int>v(n);
 for(auto &i:v)
 cin>>i;
   heapsort(v,n);
   for(auto &i:v)
   cout<<i<<" ";	
}