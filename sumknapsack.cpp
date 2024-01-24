#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>vect(1000,vector<int>(1000));
int ks(vector<int>&wt,vector<int>&val,int n,int sum)
  {
  	if(sum==0)
  		return true;
  	if(n==0)
  		return false;
  	if(wt[n-1]<=sum)
  		return ks(wt,val,n-1,sum-wt[n-1])||ks(wt,val,n-1,sum);
  	else
  		return ks(wt,val,n-1,sum);
  }
  int dpks(vector<int>&wt,vector<int>&val,int n,int sum)
  {
  	for(int i=0;i<n;i++)
  	{
  		for(int j=0;j<sum;j++)
  		{
  			if(j==0)
  			{
  				vect[i][j]=true;
  			}
  			if(i==0)
  			{
  				vect[i][j]=false;
  		   }
  		   if(wt[n-1]<=sum)
  		   {
  		   	vect[i][j]=vect[i-1][j-wt[i-1]]||vect[i-1][j];
  		   }
  		   else
  		   	vect[i][j]=vect[i-1][j];
  	} 
  }
   return vect[n][sum];
}
   void fun(int n,int sum)
   {
   	for(int i=0;i<n;i++)
	{
		for(int j=0;j<sum;j++)
		{
			cout<<vect[i][j];
		}
	}
   }
int main()
{ 
	int n;
		cin>>n;
	vector<int>wt(n),val(n);
	for(auto &i:wt)
		cin>>i;
	for(auto &i:val)
		cin>>i;
	int sum;
	cin>>sum;
	cout<<"anand"<<endl;
	cout<<"*:"<<ks(wt,val,n,sum)<<endl;
	cout<<"*:"<<dpks(wt,val,n,sum)<<endl;
	  fun(n+1,sum+1);
   cout<<"anand";
}