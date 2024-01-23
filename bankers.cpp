#include <bits/stdc++.h>
using namespace std;
void calneed(vector<vector<int>>&max,vector<vector<int>>&alloc,vector<vector<int>>&need,int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			need[i][j]=max[i][j]-alloc[i][j];
		}
	}
}
void solve(vector<vector<int>>&max,vector<vector<int>>&alloc,vector<int>&avail,int n,int m){
	vector<vector<int>>need(n,vector<int>(m));
	calneed(max,alloc,need,n,m);
	vector<bool>vis(n,false);
	vector<int>work(m);
	for(int i=0;i<m;i++)
		work[i]=avail[i];
	vector<int>se(n);
	int cnt=0;
	while(cnt<n){
		bool temp=false;
		for(int i=0;i<n;i++){
			int j;
			for(j=0;j<m;j++){
				if(need[i][j]>work[j]) break;
			}
			if(j==m){
				for(int k=0;k<m;k++){
                    work[k]+=alloc[i][k];
				}
				se[cnt++]=i;
				temp=true;
				vis[i]=true;
			}
		}
		if(temp==false){
			cout<<"not possible";
			return ;
		}
	}
	cout<<"safe sequence is :";
	for(auto &i:se)
		cout<<i<<" ";
}
int main(){
	int n,m;
	cin>>n>>m;
	vector<vector<int>>max(n,vector<int>(m)),alloc(n,vector<int>(m));
	vector<int>avail(m);
	for(auto &i:max){
		for(auto &j:i){
			cin>>j;
		}
	}
	for(auto &i:alloc){
		for(auto &j:i)
			cin>>j;
	}
	for(auto &i:avail)
		cin>>i;
	solve(max,alloc,avail,n,m);
}
