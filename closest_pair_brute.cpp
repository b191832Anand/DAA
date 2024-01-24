#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
   vector<pair<int,int>>v(n);
   for(auto &i:v)
   	cin>>i.first>>i.second;
   cout<<setprecision(8)<<fixed;
   double min=INT_MAX;
   int x1,x2,y1,y2;
   for(auto i=0;i<n-1;i++)
   {
   	for(auto j=i+1;j<n;j++)
   	{
   		float d=sqrt(powl(v[i].first-v[j].first,2)+(powl(v[i].second-v[j].second,2)));
   		if(d<min)
   		{
   			min=d;
            x1=v[i].first;
            x2=v[j].first;
            y1=v[i].second;
            y2=v[j].second;

   		}
   	}
   }
       cout<<min<<endl;
     cout<<x1<<","<<y1<<endl<<x2<<","<<""<<y2<<endl;
}