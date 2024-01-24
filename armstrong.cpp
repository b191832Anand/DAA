#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int num=n;
	int nu=n;
	int sum=0;
	int count=0;
	while(nu>0)
	{
		count++;
		nu=nu/10;
	}
cout<<count<<endl;
	while(n>0)
	{
		int last=n%10;
		sum=sum+pow(last,count);
		n=n/10;
	}
	if(num==sum)
		cout<<"armstrong";
	else
		cout<<"not armstrong";
	cout<<endl<<sum;
}