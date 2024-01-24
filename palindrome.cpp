#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int num=n;
	int reverse=0;
	while(n>0)
	{
		int last=n%10;
        reverse=reverse*10+last;
        n=n/10;
	}
	if(num==reverse)
	{
		cout<<"palindrome";
	}
	else
		cout<<"not palindrome";
  cout<<endl;
  cout<<reverse;
}