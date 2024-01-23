#include <bits/stdc++.h>
using namespace std;
void solve(vector<int>&v,int n,int f){
	unordered_set<int>s;
	unordered_map<int,int>umap;
	int miss=0;
	for(int i=0;i<n;i++){
		if(s.size()<f){
			if(s.find(v[i])==s.end()){
				miss++;
				s.insert(v[i]);
			}
			umap[v[i]]=i;
		}
		else{
			if(s.find(v[i])==s.end()){
			  int temp=INT_MAX,val;
			  for(auto &i:s){
			  	if(umap[i]<temp){
			  		temp=umap[i];
			  		val=i;
			  	}
			  }
			  s.erase(val);
			  s.insert(v[i]);
			  miss++;
			}
			umap[v[i]]=i;
		}
	}
	cout<<miss;
}
int main(){
	int n,f;
	cin>>n>>f;
	vector<int>v(n);
	for(auto &i:v)
		cin>>i;
	solve(v,n,f);
}