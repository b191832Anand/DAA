#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;cin>>n>>k;
    vector<int>ans(2*n);
    for(auto &i:ans)cin>>i;
    unordered_map<int,int>mp,up;
    for(int i=0;i<n;i++)mp[ans[i]]++;
    for(int i=n;i<2*n;i++)up[ans[i]]++;
    vector<int>a,b;
    int c=0;
    for(int i=1;i<=n;i++){
        if(mp[i]==up[i])c++;
    }
    if(c&1)c--;
    for(int i=1;i<=n;i++){
        if(a.size()<c and mp[i]==up[i] and a.size()<2*k){
            a.push_back(i);
            b.push_back(i);
        }
    }
    for(int i=1;i<=n;i++){
        if(mp[i]==2){
            if(a.size()<2*k){
                a.push_back(i);
                a.push_back(i);
            }
        }
        if(up[i]==2){
            if(b.size()<2*k){
                b.push_back(i);
                b.push_back(i);
            }
        }
    }
    for(auto &i:a)cout<<i<<" ";
    cout<<endl;
    for(auto &i:b)cout<<i<<" ";
    cout<<endl; 
}
int main(){
    int t;
    cin>>t;
    while(t--)solve();
}