#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int sum(vector<int>&fre,int i,int j)
 {
 	int s=0;
 	for(int k=i;k<=j;k++)
 	{
 		s+=fre[k];
 	}
 	return s;
 }
int obst(vector<int>&fre,int i,int j)
{
	if(i>j)
		return 0;
	if(i==j)
		return fre[i];
	  int fresum=sum(fre,i,j);
	int temp=INT_MAX;
	for(int k=i;k<=j;k++)
	{
     int d=obst(fre,i,k-1)+obst(fre,k+1,j);
     temp=min(d,temp);
	}
	return temp+fresum;
}
int main()
{
	int n;cin>>n;
	vector<int>key(n),fre(n);
	 for(auto &i:key)
	 	cin>>i;
	 for(auto &i:fre)
	 	cin>>i;
	 cout<<obst(fre,0,n-1);

}