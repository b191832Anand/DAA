#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,c=0;
	cin>>n;
    for(int i=1;i<=n;i++)
    {
    	if(n%i==0)
    		{
    			c++;
    		}
    }
    if(c==2)
    	cout<<n<<" "<<"is a prime"<<endl;
    else
    	cout<<n<<" "<<" not a prime"<<endl;
    int a;
    cin>>a;
    int reverse=0;
    while(a>0)
    {
        int l=a%10;
        a=n/10;
        reverse=reverse*10+l;
    }
    cout<<reverse;
}