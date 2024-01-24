#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n>1){
	  int num=n;
            int sum=0;
            while(num>0)
            {
                int l=num%10;
                sum=sum+pow(l,2);
                num=num/10;
            }
           n=sum;
           cout<<n<<endl;
        }
      //  if(n==1)
      //  return true;
      //  else
      //  return false;
}