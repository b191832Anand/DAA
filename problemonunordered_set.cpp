#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	unordered_set<string>s;
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
   	string str;
   	cin>>str;
   	s.insert(str);
   }
   int q;
   cin>>q;
   for(int i=0;i<q;i++)
   {
   	string e;
   	cin>>e;
   auto it=s.find(e);
   if(it!=s.end())
   {
   	cout<<"yes"<<endl;
   }else{
   	cout<<"no"<<endl;
   }
   }
}