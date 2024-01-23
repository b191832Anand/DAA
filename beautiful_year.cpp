#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int year=n+1;
	int ans=0;
	while(true){
       unordered_map<int,int>umap;
       int c=year;
       while(c){
       	int l=c%10;
       	umap[l]++;
       	c=c/10;
       }
       int fact=0;
       for(auto &i:umap){
         if(i.second>1){
           fact=1;
         }
       }
       if(fact==0){
       	ans=year;
       	break;
       }
       year=year+1;
	}
	cout<<ans;
}