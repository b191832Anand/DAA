#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,start;
	cin>>n>>start;
	vector<int>v(n);
	for(auto &i:v)cin>>i;
   	int seektime=0;
    for(int i=0;i<n;i++){
    	seektime+=abs(start-v[i]);
    	start=v[i];
    }
    cout<<seektime;
}