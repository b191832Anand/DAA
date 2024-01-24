#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	  clock_t t=clock();
	int n,a,b,c,d;
	cin>>n;
	vector<pair<int,int>>v;
	for(int i=0;i<n;++i){
		int x,y;
		cin>>x>>y;
		v.push_back({x,y});
	}
	float flag=INT_MAX;
     for(int i=0;i<n-1;i++){
     	for(int j=i+1;j<n;++j){
            float min=sqrt(pow((v[i].first-v[j].first),2)+(pow((v[i].second-v[j].second),2)));
            if(min<flag)
            {
            	flag=min;
            	a=v[i].first;
            	b=v[j].first;
            	c=v[i].second;
            	d=v[j].second;
            }
     	}
     }
     cout<<flag<<endl;
     cout<<a<<" "<<c<<endl;
     cout<<b<<" "<<d<<endl;
     t=clock()-t;
     double time_taken=(double)t/(CLOCKS_PER_SEC);
     cout<<time_taken;
}