#include <bits/stdc++.h>
#define _USE_MATH_DEFINES
#define scanv(x) for(auto &i:x)cin>>i;
#define printv(x) for(auto &i:x)cout<<i<<" ";
#define pb push_back;
template<typename T> using vv=vector<vector<T>>;
using namespace std;
using vi=vector<int>;
int main(){
	int n;
	cin>>n;
	int vv ans;
	for(int i=0;i<n;i++){
		ans.pb({0,1});
	}
	for(auto &i:ans){
		printv(i);
	}
}