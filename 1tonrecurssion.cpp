#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void tonumber(int n)
{
	if(n<=1)
	{
		 cout<<n<<endl;
	}
	else{
		tonumber(n-1);
		cout<<n<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
   tonumber(n);
}