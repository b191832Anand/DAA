#include<bits/stdc++.h>
using namespace std;
int finds(char c,string s){
	for(int i=0;i<s.length();i++)
		if(s[i]!=c)
			return i;
		return 0;
}
int main(){
   int n;
   cin>>n;
   string s=to_string(n);
   sort(s.begin(),s.end());
   int a=finds('0',s);
   swap(s[a],s[0]);
   int num=stoi(s);
   cout<<num;
}