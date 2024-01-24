#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>nums(1000,vector<int>(1000));
int cc(vector<int>wt,int n,int sum)
{
	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<sum+1;j++)
		{
            if(j==0)
            {
              nums[i][j]=1;
            }
        else if(i==0){
             nums[i][j]=0;
          }
             else if(wt[i-1]<=j)
              {
                   nums[i][j]=(nums[i][j-wt[i-1]]+nums[i-1][j]);
              }
            else
            	{
            		nums[i][j]=nums[i-1][j];
            	}
		}
	}
	return nums[n][sum];
}
int main()
{
	int n,W;
	cin>>n>>W;
	vector<int>v(n);
	for(auto &i:v)
		cin>>i;
    cout<<cc(v,n,W)<<endl;
    for(int i=0;i<n+1;i++)
    {
    	for(int j=0;j<W+1;j++)
    	{
    		cout<<nums[i][j]<<" ";
    	}
    	cout<<endl;
    }
}