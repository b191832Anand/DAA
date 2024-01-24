#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string a,b;
  cin>>a>>b;
  for(int i=0;i<a.length();i++)
  { int flag=0;
     for(int j=0;j<b.length();j++)
     {
       if(a[i+j]!=b[j])
        {
          break;
        }
        flag++;
     }
     if(flag==b.length())
     {
      cout<<"match found";
      return 0;
     }
  }
  cout<<"match not found";
}