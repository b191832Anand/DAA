#include<bits/stdc++.h>
using namespace std;
bool isvalid(string s)
{
	stack<char>st;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='('||s[i]=='{' || s[i]=='[')
		{
			st.push(s[i]);
		}
		else{
			if(st.empty())
				return false;
		    if((s[i]==')' &&st.top()=='(')||(st.top()=='{'&& s[i]=='}')||(st.top()=='[' && s[i]==']')){
                     
		    }
		    else return false;
		    st.pop();
		}
	}
	if(!st.empty())
		return false;
	return true;
}
class solution
{
public:
    bool issafe(string s)
    {
    	unordered_map<char,int>umap={{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};
    	stack<char>st;
    	for(int i=0;i<s.length();i++)
    	{
    		if(umap[s[i]]<0){
                   st.push(s[i]);
    		}
    		else{
    			if(st.empty())
    				return false;
    			if(umap[st.top()]+umap[s[i]]!=0)return false;
    			st.pop();
    		}
    	}
    	if(!st.empty())
    		return false;
    	return true;
    }
};
int main(){
  string s;
  cin>>s;
   cout<<isvalid(s)<<endl;
   cout<<solution().issafe(s);
}