#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(set<string>&s)
{  for(string value:s)
	{
		cout<<value<<"  "<<endl;
	}
	//another way of printing the set and all containers;
   for(auto &i:s)
   	cout<<i<<"  "<<endl;
}
int main()
{
	set<string>s;
	//set store in sorted order
	s.insert("abc");
	s.insert("wer");
	s.insert("hjk");
	s.insert("abc");
	s.insert("abc");
	// set store unique elements that is more than 1 time is not allowed 
	  // thus it doesnot printed the second abc
	// s.find() finds the element address
	auto it=s.find("abc");
	cout<<(*it)<<endl;
	//s.erase("abc");
	//erases the elements
	set<int>se;
	s.insert(5);
	for(auto &i:se)
		cout<<i<<" "<<endl;
    print(s);
}