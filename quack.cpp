#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	queue<string>q;
	q.push("abc");
	q.push("atc");
	q.push("ayc");
	q.push("auc");
	q.push("apc");
	while(!q.empty())
	{
		cout<<q.front()<<" "<<endl;
		q.pop();
	}
}