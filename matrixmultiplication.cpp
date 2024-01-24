#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> multiple(vector<vector<int>>&a,vector<vector<int>>&b,int n1,int m1,int n2,int m2)
{
	if(m1==n2)
	{
		 vector<vector<int>>ans;
		for(int i=0;i<n1;i++)
		{ vector<int>temp;
			for(int j=0;j<m2;j++)
			{
				int sum=0;
				
				for(int k=0;k<m1;k++)
				{ 
					sum=sum+(a[i][k]*b[k][j]);
				}
				temp.push_back(sum);
			}
			ans.push_back(temp);
		}
		return ans;
   }
}
	
int main()
{  int n1,m1,n2,m2;
   cin>>n1>>m1>>n2>>m2;
	vector<vector<int>>a(n1,vector<int>(m1));
	vector<vector<int>>b(n2,vector<int>(m2));
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<m1;j++)
		{
			int data;
			cin>>data;
			a[i][j]=data;
		}
	}
	for(int i=0;i<n2;i++)
	{
		for(int j=0;j<m2;j++)
		{
			int val;
			cin>>val;
			b[i][j]=val;
		}
	}
	vector<vector<int>>nums=multiple(a,b,n1,m1,n2,m2);
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<m2;j++)
		{
			cout<<nums[i][j]<<" ";
		}
		cout<<endl;
	}
}