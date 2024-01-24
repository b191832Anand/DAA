#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  void printvec(vector<int>v)
  {
  	 for(int i=0;i<v.size();i++)
  	 	cout<<v[i]<<"  ";
  }
int main()
{
	vector<int>v(5);
	v.push_back(10);
	printvec(v);
	cout<<endl;
	vector<int>r(10,3);
	v.pop_back(); // deleting the last elements
	printvec(v);
	printvec(r);
}