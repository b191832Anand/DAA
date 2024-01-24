 #include<iostream>
 #include<bits/stdc++.h>
 using namespace std;
   int main()
   {
   	  vector<pair<int,int>>v;
   	  int n;
   	  cin>>n;
   	  for(int i=0;i<n;i++)
   	  {
   	  	int x,y;
   	  	cin>>x>>y;
   	  	v.push_back({x,y});
   	  }
   	   vector<pair<int,int>>::iterator it;
   	   for(it=v.begin();it!=v.end();it++)
   	   {
   	   	cout<<(*it).first<<" "<<(*it).second<<endl;
   	   }
   	  // or
       for(it=v.begin();it!=v.end();it++)
   	   {
   	   	cout<<(it->first)<<" "<<(it->second)<<endl;
   	   }
   }