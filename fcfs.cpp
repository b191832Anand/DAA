#include <bits/stdc++.h>
using namespace std;
void solve(vector<pair<int,int>>&v,int n){
   vector<int>wt(n),ct(n),tat(n);
   ct[0]=v[0].first+v[0].second;
   for(int i=1;i<n;i++){
      ct[i]=max(v[i].first,ct[i-1])+v[i].second;
   }
   for(int i=0;i<n;i++){
      tat[i]=ct[i]-v[i].first;
      wt[i]=tat[i]-v[i].second;
   }
   cout<<"ct"<<" "<<"tat"<<" "<<"wt"<<endl;
   for(int i=0;i<n;i++){
      cout<<ct[i]<<" "<<tat[i]<<" "<<wt[i]<<endl;
   }
   double sum=accumulate(wt.begin(),wt.end(),0);
   cout<<sum/n;
}
int main(){
  int n;
  cin>>n;
  vector<pair<int,int>>v(n);
  for(auto &i:v)
  cin>>i.first>>i.second;
  solve(v,n); 
}