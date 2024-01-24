#include<bits/stdc++.h>
using namespace std;
bool find(vector<int>&v,int n,int m,int val){
	int size=v.size();
	int count=0;
	int ans=0;
	for(int i=0;i<size;i++){
		if(v[i]<=val){
			count++;
		}
		else{
           ans+=(count/m);
          // cout<<ans<<endl;
           count=0;
		}
	}
	ans+=(count/m);
	if(ans>=n)
		return true;
	return false;
}
int optimal(vector<int>&v,int n,int m){
	int low=*min_element(v.begin(),v.end());
	int high=*max_element(v.begin(),v.end());
    while(low<=high){
    	int mid=(low+high)/2;
    	if(find(v,n,m,mid)){
    		high=mid-1;
    	}
    	else
    		low=mid+1;
    }
    return low;
}
int main(){
  	int size,n,m;
 	 cin>>size>>n>>m;
 	 vector<int>v(size);
 	 for(auto &i:v)
 	 cin>>i;
 	int a=*min_element(v.begin(),v.end());
 	int b=*max_element(v.begin(),v.end());
 	for(int i=a;i<=b;i++){
 		if(find(v,n,m,i)==true)
 	   {
 	   	cout<<i<<endl;
 	   	break;
 	   }
 	}
      cout<<optimal(v,n,m);
 }