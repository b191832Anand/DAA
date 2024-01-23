#include <bits/stdc++.h>
using namespace std;
int solve(vector<int>&v,int head,int n){
	int index;
	bool temp=false;
	for(int i=0;i<n;i++){
		if(v[i]<=head){
			index=i;
			if(v[i]==head)temp=true;
		}
	}
	int index2=index;
	if(temp==false){
		index++;
	}
	if(temp){
		index2--;
	}
	int seektime=0;
	for(int i=index;i<=n;i++){
        if(i==n){
        	seektime+=abs(199-head);
        	head=199;
        }
        if(i!=n){
       seektime+=abs(v[i]-head);
       head=v[i];
      }
	}
	for(int i=index2;i>=0;i--){
		seektime+=abs(head-v[i]);
		head=v[i];
	}
	return seektime;
}
int main(){
	int n,start;
	cin>>n>>start;
	vector<int>v(n);
	for(auto &i:v)
		cin>>i;
	int seektime=0;
    sort(v.begin(),v.end());
    for(auto &i:v)
    	cout<<i<<" ";
    cout<<endl;
    seektime +=(199-start);
    seektime+=(199-v[0]);
    cout<<seektime<<endl;
    cout<<solve(v,start,n);
}