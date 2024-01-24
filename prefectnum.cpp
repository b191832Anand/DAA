#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	cin>>num;
	int sum=0;
	for(int i=1;i<=num/2;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==num)
		cout<<"1";
	else
		cout<<"0";
}