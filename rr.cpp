#include<bits/stdc++.h>
using namespace std;
void solve(vector<pair<pair<int,int>,int>>&v,int n){
    vector<int>ct;
    for(int i=0;i<n;i++){
    	if(ct.size()==0){
    	  v[i].first.second--;
    	  ct.push_back(ct.size()+1);
    	}
    	else{
    		int m=INT_MAX,index=-1;
    	     for(int j=0;j<=i;j++){
                  if(v[j].first.second<m && v[j].first.second!=0){
                  	m=v[j].first.second;
                  	index=j;
                  }
    	     }
            v[index].first.second--;
            ct.push_back(ct.size()+1);
    	}
    }
    sort(v.begin(),v.end(),[](const auto &a,const auto &b){
    	return a.first.second<b.first.second;
    });
    for(int i=0;i<n;i++){
    	if(v[i].first.second!=0){
    		ct.push_back(ct.back()+v[i].first.second);
    	}
    }
     for(auto &i:v){
  	cout<<i.first.first<<" "<<i.first.second<<" "<<i.second<<endl;
  }
  for(auto &i:ct)
  	cout<<i<<" ";
}
int main(){
    int n;
    cin>>n;
    vector<pair<pair<int,int>,int>>v(n);
    for(auto &i:v){
    	cin>>i.second>>i.first.first>>i.first.second;
    }  
  sort(v.begin(),v.end());
     solve(v,n);
}