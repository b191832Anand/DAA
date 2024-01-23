#include<bits/stdc++.h>
using namespace std;
int solve(int pages,vector<int>&v,int i){
  if(pages<=0)return i;
   return solve(pages-v[(i%7)],v,i+1);
}
int main(){
  int pages;
  cin>>pages;
 vector<int>v(7);
 for(int i=0;i<7;i++){
   int data;
   cin>>data;
   v[i]=data;
}
int a=solve(pages,v,0);
cout<<a%7;
}