#include <bits/stdc++.h>
using namespace std;
void solve(vector<int>&v,int n,int f){
	unordered_set<int>s;
	queue<int>q;
	int miss=0;
	for(int i=0;i<n;i++){
		if(s.size()<f){
			if(s.find(v[i])==s.end()){
				s.insert(v[i]);
				miss++;
				q.push(v[i]);
			}
		}
		else{
			  if(s.find(v[i])==s.end()){
			  	 int val=q.front();
			  	 q.pop();
			  	 s.erase(val);
			  	 s.insert(v[i]);
			  	 q.push(v[i]);
			  	 miss++;
			  }
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