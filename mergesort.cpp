#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int low,int mid,int high)
{
	int nl=mid-low+1;
	int nr=high-mid;
	 int larr[nl];
	 int rarr[nr];
	for(int i=0;i<nl;i++)
	{
		larr[i]=a[low+i];
	}
	for(int j=0;j<nr;j++)
	{
		rarr[j]=a[mid+1+j];
	}
	int i=0,j=0,k=low;
	while(i<nl && j<nr)
	{
		if(larr[i]<=rarr[j])
		{
			a[k]=larr[i];
			i++;       
			k++;
		}
		else
		{
			a[k]=rarr[j];
			j++;
			k++;
		}
	}
	while(i<nl)
	{
	a[k]=larr[i];
		i++;
		k++;
	}       
	while(j<nr)
	{
		a[k]=rarr[j];
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
	cout<<"before sort: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	mergesort(a,0,n-1);
	cout<<"after sort"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}