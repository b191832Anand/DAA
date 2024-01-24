#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  int gcd(int n,int m){
  	while(n%m){
  	    int a=m;
  	    if(n%m==0)
  	    	return m;
  	    m=n%m;
  	    n=a;
  	}
  	return m;
  }
int main()
{
  int n,m;
  cin>>n>>m;
  cout<<gcd(n,m);
}