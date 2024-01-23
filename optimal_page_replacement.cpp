#include <bits/stdc++.h>
using namespace std;
int search(vector<int>&v,vector<int>&fr,int n,int index){
   int largest=index;
   int res=-1;
   for(int i=0;i<fr.size();i++){
      int j;
      for(j=index;j<n;j++){
         if(fr[i]==v[j]){
            if(j>largest){
               largest=j;
               res=i;
            }
            break;
         }
      }
      if(j==n)return i;
   }
   return (res==-1)?0:res;
}
void solve(vector<int>&v,int n,int f){
   vector<int>fr;
   int hit=0;
   for(int i=0;i<n;i++){
      if(find(fr.begin(),fr.end(),v[i])!=fr.end()){
         hit++;
         continue;
      }
      if(fr.size()<f){
         fr.push_back(v[i]);
      }
      else{
         int j=search(v,fr,n,i+1);
         fr[j]=v[i];
      }
   }
   cout<<hit;
}
int main(){
  int n,f;
  cin>>n>>f;
  vector<int>v(n);
  for(auto &i:v)
  cin>>i;
  solve(v,n,f); 
}