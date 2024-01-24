 #include<iostream>
#include<bits/stdc++.h>
using namespace std;
  vector<vector<int>>vect(1000,vector<int>(1000,-1));
int MCM(vector<int>&v,int i,int j)
{
	   if(i==j)
	   	return 0;
	   if(vect[i][j]!=-1)
	   	return vect[i][j];
     int cost=INT_MAX;
     for(int k = i; k < j; k++)
     {
     	int temp=MCM(v,i,k)+MCM(v,k+1,j)+(v[i-1]*v[k]*v[j]);
     	 cost=min(cost,temp);
     	 vect[i][j]=cost;
     }
     return vect[i][j];
}
int main(){
	int n;
	cin>>n;
	vector<int>v(n) ;
	for(auto &i:v)
		cin>>i;
	cout<<MCM(v,1,n-1)<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++){
			cout<<vect[i][j]<<" ";
		}
		cout<<endl;
	}
}