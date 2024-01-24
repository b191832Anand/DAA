#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	 // multiset allows us to store multiple time of the 
	// same variable we can see that abc printed both times
	multiset<string>s;
	s.insert("abc");
	s.insert("wer");
	s.insert("hjk");
	s.insert("abc");
	 cout<<"if i want to delete the abc:"<<endl;
	 s.erase("abc");
  // s.find() return the first itertor if duplicate is present
	 cout<<"both the elemnts are deleted"<<endl;
	 // to avoid this use the following way
	   auto it=s.find("abc");
	   cout<<"before deletion"<<endl;
	   for(auto &i:s)
		cout<<i<<" "<<endl;
	   if(it!=s.end())
	   {
	   	s.erase(it);
	   }
	   cout<<"after deletion"<<endl;
	   for(auto &i:s)
		cout<<i<<" "<<endl;
}