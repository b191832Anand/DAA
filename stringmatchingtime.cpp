#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,h;
	cin>>s>>h;
	clock_t t=clock();
	int n=s.size();
	int m=h.size();
	int flag=1;
	for(int i=0;i<=n-m;i++)
	{
		 flag=1;
		for(int j=0;j<m;j++)
		{
			if(s[i+j]!=h[j])
			{
				flag=0;
				break;
			}
		}
		if(flag)
				break;
	}
	if(flag)
		cout<<"found"<<endl;
	else cout<<"not found"<<endl;
	t=clock()-t;
	 double time_taken=((double)t/CLOCKS_PER_SEC);
	 cout<<time_taken;
}