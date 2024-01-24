#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  long long power(int n,int count)
  {
      if(n==0)
      {
      	return 0;
      }
      else if(count==0)
      {
      	return 1;
      }
      else
      	return (n*power(n,count-1));
  }
int main()
{
	int  n;
	cin>>n;
	int count=0;
      	int num=n;
      	while(num>0)
      	{
      	     int last=num%10;
      	     count=count*10+last;
      		num=num/10;
      	}
	cout<<power(n,count);
}