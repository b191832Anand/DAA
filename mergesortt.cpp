#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int low,int mid,int high)
{
	int n=mid-low+1;
	int b=high-mid;
	int v[n],c[b];
	for(int i=0;i<n;i++)
	{
		v[i]=a[low+i];
	}
	for(int i=0;i<b;i++)
	{
		c[i]=a[mid+1+i];
	}
	int i=0,j=0,k=low;
	while(i<n && j<b)
	{
		if(v[i]<=c[j])
		{
			a[k]=v[i];
			i++;
		}
		else
		{
			a[k]=c[j];
			j++;
		}
		k++;
	}
	while(i<n)
		{
			a[k]=v[i];
			i++;
			k++;
		}
		while(j<b)
		{
			a[k]=c[j];
			j++;
			k++;
		}
}
void mergesort(int a[],int low,int high)
{
	if(low<high)
	{
		int mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		a[i]=x; 
	}
	mergesort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}