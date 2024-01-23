#include <bits/stdc++.h>
using namespace std;
int solve(int index,vector<int>&v,int buy){
	if(index==v.size())return 0;
	long profit;
	if(buy){
	  profit=max((-v[index]+solve(index+1,v,0)),solve(index+1,v,1));
	}
	else{
          profit=max((v[index]+solve(index+1,v,1)),solve(index+1,v  ,0));
	}
	return profit;
}
int main(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(auto &i:v)cin>>i;
	int m=v[0];
   int sum=INT_MIN;
   for(int i=1;i<n;i++){
   	sum=max(sum,v[i]-m);
   	 int temp=v[i+1];
   	 int ptr=INT_MIN;
   	 int a=v[i]-m;
   	 for(int j=i+1;j<n;j++){ 
          ptr=max(ptr,v[j]-temp);
          temp=min(temp,v[j]);
   	 }
   	 sum=max(sum,a+ptr);
   	 m=min(m,v[i]);
   }
   cout<<"sum:"<<sum<<endl;
   cout<<solve(0,v,1);
}