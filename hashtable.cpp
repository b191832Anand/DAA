#include<iostream>
#include<bits/stdc++.h>
using namespace std;
# define max 1000
bool hashtable[max+1][2];
 void insert(int a[],int n)
 {
 	for(int i=0;i<n;i++)
 	{
 		if(a[i]>0)
 		{
 			hashtable[a[i]][0]=1;
 		}
 		else
 		{
 			int x=abs(a[i]);
 			hashtable[a[i]][1]=1;
 		}
 	}
 }
   bool search(int n)
   {
   	if(n>0)
   	{
   		if(hashtable[n][0]==1)
   		{
   			return true;
   		}
   		else
   			return false;
   	}
   	else
   	{
   		if(hashtable[n][1]==1)
   		{
   			return true;
   		}
   		else
   			return false;
   	}
   }
int main()
{
	int a[]={1,2,3,4,5,6,-1};
	int n=sizeof(a)/sizeof(a[0]);
     insert(a,n);
     int i=-1;
     cout<<search(i)<<endl;
     cout<<hashtable[6][0];
}