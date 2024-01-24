#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>NGE(vector<int>v)
{  vector<int>nge(v.size());
	stack<int>st;
	for(int i=0;i<v.size();i++)
	{
		while(!st.empty() &&v[i]>v[st.top()])
		{
			nge[st.top()]=v[i];
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty())
	{
		nge[st.top()]=-1;
		st.pop();
	}
	return nge;
}
int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(auto &i:v)
		cin>>i;
	vector<int>nge=NGE(v);
	for(auto &i:v)
	cout<<i<<" ";
  cout<<endl;
	for(auto &i:nge)
		cout<<i<<" ";

}