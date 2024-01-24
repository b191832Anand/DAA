 #include<iostream>
 #include<bits/stdc++.h>
 using namespace std;
   int main()
   {
     pair<int,int>p;
      // pairs can make pair of many things like int strings,float and long long int ;
  // initilization of pair;
      p=make_pair(3,5);
      // or 
      p={3,5};
      cout<<p.first<<" "<<p.second<<endl;
      // array of pairs;
    pair<int,int>p_array[3];
      p_array[0]={2,4};
      p_array[1]={3,6};
     p_array[2]={5,4};
      for(int i=0;i<3;i++)
      	cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
     pair<int,int>r;
       cin>>r.first;
       cout<<r.first;
  }

