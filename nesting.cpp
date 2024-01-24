#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	pair<int,int> p1,p2;
	p1={1,2};
	p2={2,4};
	cout<<(p1<p2)<<endl;
	// if the statement is true then it prints 1;
	// else it prints 0;
	map<pair<string,string>,vector<int>> m;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string fn,ln;
		cin>>fn>>ln;
		int ct;
		cin>>ct;
		for(int j=0;j<ct;j++)
		{
           int marks;
           cin>>marks;
         m[{fn,ln}].push_back(marks);
		}
	}
	for(auto &pr:m)
	{
       auto &fullname=pr.first;
       auto &list=pr.second;
        cout<<fullname.first<<" "<<fullname.second<<" "<<list.size()<<endl;
        for(auto &element:list)
        	cout<<element<<" ";
        cout<<endl;
	}
		
}