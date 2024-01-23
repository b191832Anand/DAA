#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int>at(n),bt(n),wt(n),tat(n),ct(n),x(n);
   for(int i=0;i<n;i++){
    cin>>at[i];
    cin>>bt[i];
    x[i]=bt[i];
   }
  int cnt=n,time=0;
  while(cnt){
    int val=INT_MAX;
    int index=n;
    for(int i=0;i<n;i++){
       if(at[i]<=time && bt[i]<val && bt[i]>0){
           val=bt[i];
           index=i;
       }
    }
    if(index!=n)
      bt[index]--;
    time++;
    if(bt[index]==0){ 
      cnt--;
      ct[index]=time;
      tat[index]=ct[index]-at[index];
      wt[index]=tat[index]-x[index];
    }
  }
  cout<<(double)accumulate(wt.begin(),wt.end(),0)/n;
}