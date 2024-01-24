#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void bubblesort(vector<int>&v)
{
	for(int i=0;i<v.size()-1;i++)
	{
		for(int j=0;j<v.size()-i-1;j++)
		{
			if(v[j]>v[j+1])
			{
				int temp=v[j];
				v[j]=v[j+1];
				v[j+1]=temp;
			}
		}
	}
}
int main()
{
	vector<int>v;
	int n;
	cin>>n;
	for(int i=0;i<n;++i)
	{
	  int x;
	  cin>>x;
	  v.push_back(x);
	}
	for(auto &i:v)
	{
       cout<<i<<"  ";
	}
	cout<<endl;
	bubblesort(v);
	for(auto &i:v)
	{
       cout<<i<<"  ";
	}
}