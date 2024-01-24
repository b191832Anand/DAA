#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 void display(vector<int>v)
 {
 	for(int i=0;i<v.size();i++)
 	{
 		cout<<v[i]<<" ";
 	}
 	cout<<endl;
 }
 void bubblesort(vector<int>&a)
 { int n=a.size();
 	for(int i=0;i<n-1;i++)
 	{
 		for(int j=i+1;j<n;j++)
 		{
 			if(a[i]>a[j])
 			{
 				int temp=a[j];
 				a[j]=a[i];
 				a[i]=temp;
 			}
 		}
 	}
 }
int main()
{
	int n;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	display(v);
	bubblesort(v);
	for(auto &i:v)
		cout<<i<<" ";
}