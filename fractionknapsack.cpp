#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,W;
	cin>>n>>W;
	vector<int>val(n),wt(n);
	for(auto &i:val)
		cin>>i;
	for(auto &i:wt)
		cin>>i;
	  for(int i=0;i<n;i++)
	  {
	  	 float t=val[i]/wt[i];
	  	for(int j=i+1;j<n;j++)
	  	{
              float r=val[j]/wt[j];
              if(r<t)
              {
              	swap(val[i],val[j]);
              	swap(wt[i],wt[j]);
              }
	  	}
	  }
	int v=0;
	 for(int i=n-1;i>=0;i--)
	 {
	 	if(wt[i]<=W)
	 	{
             v=v+val[i];
             W=W-wt[i];
	 	}
	 	else
	 	{
	 		int temp=(val[i]/wt[i])*W;
	 		v=v+temp;
	 		break;
	 	}
	 }
	 cout<<v;
}
