#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,c;
	cin>>n>>c;
	int a[n],b[c];
	for(int i=0;i<n;i++)
	{
		int data;
		cin>>data;
		a[i]=data;
	}
	for(int i=0;i<c;i++)
	{
		int val;
		cin>>val;
		b[i]=val;
	}
      int sum=0;
      for(int i=0;i<n;i++)
      {
      	int l=a[i];
      	sum=sum*10+l;
      }
      int temp=0;
      for(int i=0;i<c;i++)
      	{
      	   int r=b[i];
      		temp=temp*10+r;
      	}
      	int total=temp+sum;
      	cout<<total;
}