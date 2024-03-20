#include<bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	cin>>s;
	int small=0,big=0;
	string t="";
	for(int i=s.size()-1;i>=0;i--){
		if(s[i]>='a'&&s[i]<='z'){
			if(s[i]=='b')small++;
			else if(small)small--;
			else t+=s[i];
		}
		else {
			if(s[i]=='B')big++;
			else if(big)big--;
			else t+=s[i];
		}
	}
	reverse(t.begin(),t.end());
	cout<<t<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--)solve();
}
/*
    #include<bits/stdc++.h>
    using namespace std;
    void solve(){
    	string s;
    	cin>>s;
    	stack<pair<char,int>>lower,upper;
    	for(int i=0;i<s.size();i++){
    		if(s[i]=='B'){
    			if(!upper.empty()){
    				upper.pop();
    			}
    		}
    		else if(s[i]=='b'){
    			if(!lower.empty()){
    				lower.pop();
    			}
    		}
    		else{
    			  if(s[i]>='a' && s[i]<='z')lower.push({s[i],i});
    			  else upper.push({s[i],i});
    		}
    	}
       vector<pair<char,int>>ans;
       while(!upper.empty()){
       	  ans.push_back(upper.top());
       	  upper.pop();
       }
       while(!lower.empty()){
       	ans.push_back(lower.top());
       	lower.pop();
       }
       sort(ans.begin(),ans.end(),[&](const auto a,const auto b){
       	return a.second<b.second;
       });
       string t="";
       for(auto &i:ans){
       	  t+=i.first;
       }
       cout<<t<<endl;
    }
    int main(){
    	int t;
    	cin>>t;
    	while(t--)solve();
    }
    */
