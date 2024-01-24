#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int getbit(int n,int pos)
 {
 	return ((n &(1<<pos))!=0);
 }
int main()
{
	int n,pos;
	cin>>n>>pos;
	cout<<getbit(n,pos);
	return 0;
}