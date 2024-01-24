#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>ds;
    int fact=1;
    for(int i=1;i<n;i++){
    	fact*=i;
    	ds.push_back(i);
    } 	
    ds.push_back(n);
    k=k-1;
    string ans="";
    while(true){
    	ans+=to_string(ds[k/fact]);
    	ds.erase(ds.begin()+k/fact);
    	if(ds.size()==0)
    		break;
    	k=k%fact;
    	fact=fact/ds.size();
    }
    cout<<ans;
}