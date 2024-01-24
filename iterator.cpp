 #include<iostream>
 #include<bits/stdc++.h>
 using namespace std;
   int main()
 {
      vector<int>v;
      int n;
      cin>>n;   
      for(int i=0;i<n;i++)
      {
      	int x;
      	cin>>x;
      	v.push_back(x);
      }
       // iterator format
      // iterator pointes to the first element of the vector
         vector<int>::iterator it=v.begin();
         cout<<(*(it))<<endl;
         for(it=v.begin();it!=v.end();it++)
         {
         	cout<<(*(it))<<endl;
         }
         
 }