#include <bits/stdc++.h>
using namespace std;
void solve(vector<int>block,vector<int>processor,int n,int m){
	vector<int>v(m,-1);
	for(int i=0;i<m;i++){
		int best=-1;
        for(int j=0;j<n;j++)
        {
        	if(block[j]>=processor[i]){
        		if(best==-1)
        			best=j;
        		else if(block[best]>block[j])
        			best=j;
        	}
        }
        cout<<"i "<<i<<" "<<best<<endl;
        if(best!=-1){
        	v[i]=best;
        	block[best]-=processor[i];
        }
	}
  for(auto &i:v)
  	cout<<i<<" ";
}
int main(){
	int n,m;
	cin>>n>>m;
	vector<int>block(n),processor(m);
	for(auto &i:block)
		cin>>i;
	for(auto &i:processor)
		cin>>i;
	solve(block,processor,n,m);
}