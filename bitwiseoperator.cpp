#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,n;
	cin>>num>>n;
	if(num & (1<<n))
cout<<"bit is set"<<endl;
  else 
  cout<<" not set"<<endl;
   cout<<n<<endl;
	int count=0;
	for(int i=0;i<4;i++) 
	{
		if(num &(1<<i))
			count++;
				}   
				cout<<count;

}