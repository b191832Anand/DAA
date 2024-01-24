 #include<iostream>
 #include<bits/stdc++.h>
 using namespace std;
 void printvec(vector<pair<int,int>>v)
    {
    	 for(int i=0;i<v.size();i++)
    	 	 // v.size->0(1)
    	 	cout<<v[i].first<<"  "<<v[i].second<<endl;
        }
   int main()
   {
       vector<pair<int,int>>v;
       int n;
       cin>>n;
       for (int i=0;i<n;i++)
       {
       	int x,y;
       	 cin>>x>>y;
       	  v.push_back({x,y});
       }
       printvec(v);
   }