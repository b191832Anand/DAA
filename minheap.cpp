#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 void swap(int *a,int *b)
 {
 	int temp=*a;
 	*a=*b;
 	*b=temp;
 }
 void display(int a[],int n)
{
  for(int i=0;i<n;i++)
  {
  	cout<<a[i]<<" ";
  }
}
void heapify(int a[],int n,int i)
{
	int smallest=i;
	int l=(2*i)+1;
	int r=(2*i)+2;
	if(l<n && a[l]<a[smallest])
		smallest=l;
	if(r<n && a[r]<a[smallest])
		smallest=r;
	if(i!=smallest)
	{
		swap(&a[smallest],&a[i]);
		heapify(a,n,smallest);
	}
}
void minheap(int a[],int n)
{
	for(int i=(n/2)-1;i>=0;i--)
	{
		heapify(a,n,i);
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	minheap(a,n);
	display(a,n);
}