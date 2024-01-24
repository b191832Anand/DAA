#include<bits/stdc++.h>
using namespace std;
 int main(){
     int n;
     cin>>n;
     vector<pair<int,int>> v(n);
     for(auto &i:v)
        cin>>i.first>>i.second;
    float m=INT_MAX;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            float d=sqrt(powl(v[i].first-v[j].first,2)+powl(v[i].second-v[j].second,2));
            m=min(d,m);
        }
    }
    cout<<m;
 }