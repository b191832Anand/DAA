#include <bits/stdc++.h>
using namespace std;
bool ss(vector<int>&v,int target,int index){
	if(target==0)return true;
	if(index==0)return (v[0]==target);
	bool nontake=ss(v,target,index-1);
	bool take=false;
	if(target>=v[index])take=ss(v,target-v[index],index-1);
	return nontake|take;
}
int main(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(auto &i:v)
		cin>>i;
	int target=0;
	for(int i=0;i<n;i++)target+=v[i];
	 if(target%2){
	 	cout<<target<<endl;
	 	cout<<"not possible"<<endl;
	 }
	 else{
	 	target=target/2;
	 	cout<<target<<endl;
	 	cout<<ss(v,target,n);
	 }
}