#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<int>s;
	s.push(2);
	s.push(25);
	s.push(5);
	s.push(7);
	s.push(2);
	s.push(28);
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}

}