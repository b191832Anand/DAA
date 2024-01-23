#include <bits/stdc++.h>
using namespace std;
double solve(vector<pair<int,int>>&v,int n){
  vector<int>ct(n),tat(n),wt(n);
  ct[0]=v[0].first+v[0].second;
  for(int i=1;i<n;i++){
    ct[i]=max(v[i].first,ct[i-1])+v[i].second;
  }
  for(int i=0;i<n;i++){
    tat[i]=ct[i]-v[i].first;
  }
  for(int i=0;i<n;i++){
    wt[i]=tat[i]-v[i].second;
  }
  return (double)accumulate(wt.begin(),wt.end(),0)/n;
}
int main(){
   int n;
   cin>>n;
   vector<pair<int,int>>v(n);
   for(auto &i:v)
    cin>>i.first>>i.second;
  sort(v.begin(),v.end(),[](const auto &a,const auto &b){
    return a.second<b.second;
  });
  cout<<solve(v,n);
}