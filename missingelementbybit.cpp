#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(auto &i:v)
		cin>>i;
	int ans=0;
	for(int i=0;i<n;i++)
	{
		ans^=(v[i]^i);
		  cout<<ans<<endl;
	}
  ans=ans^n;
	cout<<ans;
	 int a=14;
	 cout<<endl<<"checking the bit"<<endl;
	 // to check the bit is set or not
	 if((1<<4)&a)
	 	cout<<1;
	 else
	 	cout<<0;
	 // it means that the 4 bit is set with 1
	 cout<<endl;
	 // finding the 1 bit in the number
	 // to find the right most set bit we use 
	 // x &(~(x-1))
	 // x-1 gives if the right bit is 1 then it makes the bit as 0
	 // then following as ones
	 // suppose we have b=14
	 // its binary is 1110 then b-1=0001
	 // b-1 makes the right most bit as 0 and the bit after the right most bit as 1
	 // and ~(b-1)1110
	 // & of the both give as the 0010
	 // know only the right most is set
	 // the above formula gives this which is most important 
	 // in bit manipulation
	 int count=0;
	 int b=a;
	 while(a!=0)
	 {
	   a=a&(a-1);
	   count++;
	 }
	 cout<<count<<endl;
    b=b&(~(b-1));
    cout<<b<<endl;
    // to find the bits in the given number
    // int n=(log(num)/log2)+1;
}