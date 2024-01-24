#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>a(5);
bool issafe(int index, int val)
{
	for(int i=1;i<index;i++)
	{
		if(a[i]==val || abs(index-i)==abs(val-a[i]))
			return false;
	}
	return true;
}
void nqueens(int k)
{
	if(k==5)
	{
		for(int i=1;i<5;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
	else{
		for(int i=1;i<=4;i++)
		{
			if(issafe(k,i))
			{
				a[k]=i;
			}
		}
	}
}
int main()
{
	nqueens(1);
}