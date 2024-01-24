#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void display(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
  void swap(int *a,int *b)
  {
  	int temp=*a;
  	*a=*b;
  	*b=temp;
  }
 int partition(int a[],int low,int high)
 {
 	int pivot=a[low];
 	int i=high;
 	 for(int j=i-1;j>=low;j--)
 	 {
 	 	if(a[j]>pivot)
 	 	{
 	 		i--;
 	 		swap(&a[i],&a[j]);
 	 	}
 	 }
 	 swap(&a[i],&a[low]);
 	 return i;
 }
 void quicksort(int a[],int low,int high)
 {
 	if(low<high)
 	{
 		int pi=partition(a,low,high);
 		quicksort(a,low,pi-1);
 		quicksort(a,pi+1,high);
 	}
 }
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		int data;
		cin>>data;
		a[i]=data;
	}
	quicksort(a,0,n-1);
	display(a,n);
}