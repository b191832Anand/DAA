#include <bits/stdc++.h>
using namespace std;
void solve(int index,vector<int>&ans,vector<int>&v){
	if(index==v.size()){
		for(auto &i:ans)
			cout<<i<<" ";
		cout<<endl;
		return;
	}
	ans.push_back(v[index]);
	solve(index+1,ans,v);
	ans.pop_back();
	solve(index+1,ans,v);

}
int main(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(auto &i:v)
		cin>>i;
	
	vector<int>ans;
	solve(0,ans,v);
}