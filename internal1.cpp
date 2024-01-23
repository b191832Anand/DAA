#include <bits/stdc++.h>
using namespace std;
#define all(c) c.begin(),c.end(),0
int main(){
	int n,time_quantum;
	cin>>n>>time_quantum;
	vector<int>at(n),wt(n),bt(n),tat(n),ct(n),x(n);
	for(int i=0;i<n;i++){
		cin>>at[i];
		cin>>bt[i];
		x[i]=bt[i];
	}
	int cnt=n;
	int time=0;
	while(cnt){
		for(int i=0;i<n;i++){
			if(bt[i]>0){
				if(bt[i]>time_quantum){
					time+=time_quantum;
					bt[i]-=time_quantum;
				}
				else{
					  cnt--;
					  time+=bt[i];
					  ct[i]=time;
					  tat[i]=ct[i]-at[i];
					  wt[i]=tat[i]-x[i];
					  bt[i]=0;
				}
			}
		}
	}
	cout<<"ct"<<" "<<"tat"<<" "<<"bt"<<endl;
	for(int i=0;i<n;i++){
		cout<<ct[i]<<" "<<tat[i]<<" "<<wt[i]<<endl;
	}
	double sum=accumulate(all(wt));
	cout<<"average waiting time  "<<sum/n<<endl;
	double a=accumulate(all(tat));
	cout<<"average tat  "<<a/n;
}