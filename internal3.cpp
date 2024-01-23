#include <bits/stdc++.h>
using namespace std;
#define all(c) c.begin(),c.end(),0
int main(){
	int n;
	cin>>n;
	vector<int>at(n),bt(n),wt(n),tat(n),ct(n),x(n);
	for(int i=0;i<n;i++){
		cin>>at[i];
		cin>>bt[i];
		x[i]=bt[i];
	}
	int cnt=n;
	int time=0;
	while(cnt){
		int val=INT_MAX;
		int index=n;
		for(int i=0;i<n;i++){
			if(at[i]<=time && bt[i]<val && bt[i]>0){
				val=bt[i];
				index=i;
			}
		}
		cout<<time<<" "<<index<<endl;
		time++;
		if(index!=n)
			bt[index]--;
		if(bt[index]==0){
			cnt--;
			ct[index]=time+1;
			tat[index]=ct[index]-at[index];
			wt[index]=tat[index]-x[index];
		}
	}
	for(auto &i:wt)
		cout<<i<<" ";
	cout<<endl;
	double sum=accumulate(all(wt));
	cout<<sum/n;
}