#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  int binarytodecimal(int n)
  {
  	int t=0;
  	int base=1;
  	  while(n>0)
  	  {
  	  	int last=n%10;
  	  	if(last==1)
  	  		t=t+last*base;
  	  	base=base*2;
  	  	n=n/10;
  	  }
  	  return t;
  }
int main()
{
	int n;
	cin>>n;
	cout<<binarytodecimal(n);
}