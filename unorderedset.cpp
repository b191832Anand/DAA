#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	unordered_set<string>s;
	s.insert("abc");
	s.insert("auioc");
	for(auto &i:s)
		cout<<i<<" "<<endl;
	//unordered_set doesnot matters the order that is
	// sorting is not in build in the it
}