#include<iostream>
#include<bits/stdc++.h>
using namespace std;
unordered_map<char,int>m={{'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3}};
void balance(string s)
{  
	stack<char>st;
	for(char bracket:s)
	{
		if(m[bracket]<0)
		{
			st.push(bracket);
		}
		else{
			if(st.empty())
             {
             	cout<<"NO";
             	          exit(1);   
          }
             char top=st.top();
             st.pop();
             if(m[top]+m[bracket]!=0)
             {
             	cout<<"NO";
             	exit(1);
             }
		}
	}
		if(st.empty())
		{
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
	}
int main()
{
   int t;
   while(t--)
   {
   	string s;
   	cin>>s;
   	balance(s);
   }
} 