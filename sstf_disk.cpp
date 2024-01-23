#include <bits/stdc++.h>
using namespace std;
#define all(c) c.begin(),c.end()
int solve(vector<int>&v,int head,int n){
	sort(all(v));
	int index,index2;
	bool temp=false;
	for(int i=0;i<n;i++){
		if(v[i]<=head){
			index=i;
			if(v[i]==head)temp=true;
		}
	}
	 index2=index+1;
	if(temp){
		index--;
	}
	int seektime=0;
	for(int i=0;i<n;i++){
		int a=abs(head-v[index]);
		int b=abs(head-v[index2]);
		seektime+=min(a,b);
		if(a<b){
			head=v[index];
			index--;
		}
		else{
			head=v[index2];
			index2++;
		}
		if(index<0 || index2>=n)break;
	}
	if(index<0){
		for(int i=index2;i<n;i++){
			int a=abs(head-v[i]);
			seektime+=a;
			head=v[i];
		}
	}
	else{
		for(int i=index;i>=0;i--){
			int a=abs(head-v[i]);
			seektime+=a;
			head=v[i];
		}
	}
	return seektime;
}
int main(){
	int n,start;
	cin>>n>>start;
	vector<int>v(n);
	for(auto &i:v)
	cin>>i;
  cout<<solve(v,start,n);
}