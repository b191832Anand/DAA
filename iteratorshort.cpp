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
        for(int value:v)
        	cout<<value<<"  ";
          cout<<endl;
        // or the above is copy of the vector
         // then then below send the exaxt the vector
         for(auto &i:v)
         	cout<<i<<"  ";
        \












        out<<endl;
         vector<pair<int,int>>r={{1,2},{2,3}};
         for(auto &j:r)
         	cout<<j.first<<" "<<j.second<<endl;

   }