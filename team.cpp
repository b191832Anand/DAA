#include <bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int cnt=0;
   while(n--){
   	int a,b,c;
   	cin>>a>>b>>c;
   	  a=a+b+c;
   	  if(a>=2)cnt++;
   }	
   cout<<cnt;
}