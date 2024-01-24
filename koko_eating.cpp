#include<bits/stdc++.h>
using namespace std;
int find(vector<int>&v,int val){
	int n=v.size();
	int temp=0;
	for(int i=0;i<n;i++){
          temp+=ceil((double)v[i]/(double)val);
	}
	return temp;
}
int brute(vector<int>&v,int h,int n){
	int m=*max_element(v.begin(),v.end());
	for(int i=1;i<=m;i++){
         int temp=0;
		 temp=find(v,i);
		if(temp<=h)
			return i;
	}
	return -1;
}
 int optimal(vector<int>&v,int h){
 	int low=1;
 	int high=*max_element(v.begin(),v.end());
 	while(low<=high){
 		int mid=(low+high)/2;
 		int temp=find(v,mid);
 		if(temp<=h){
 			high=mid-1;
 		}
 		else{
 			low=mid+1;
 		}
 	}
 	return low;
 }
int main(){
   int n,h;
   cin>>n>>h;
   vector<int>v(n);
   for(auto &i:v)
   cin>>i;
   cout<<brute(v,h,n)<<endl;
   cout<<optimal(v,h);  	
}