#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int l=(log(n)/log(2))+1;
	int count=0;
	for(int i=0;i<l;i++)
	{
		if(n&(1<<i))
			count++;
	}
	if(count==1)
		cout<<"power of two ";
	else
		cout<<"not a power of two";
}