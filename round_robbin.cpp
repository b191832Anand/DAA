#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>at(n),bt(n),wt(n),tat(n),ct(n),x(n);
	for(int i=0;i<n;i++){
		cin>>at[i];
		cin>>bt[i];
	    x[i]=bt[i];
	}
	int tq;
	cin>>tq;
	int cnt=n,time=0;
	while(cnt){
		for(int i=0;i<n;i++){
			if(bt[i]>0){
				if(bt[i]>tq){
					time+=tq;
					bt[i]-=tq;
				}
				else{
					time+=bt[i];
					cnt--;
					ct[i]=time;
					tat[i]=ct[i]-at[i];
					wt[i]=tat[i]-x[i];
					bt[i]=0;
				}
			}
		}
	}
	cout<<(double)accumulate(wt.begin(),wt.end(),0)/n;
}