 
 #include<iostream>
 #include<bits/stdc++.h>
 using namespace std;
  void print(map<int,string>m)
    {
    	cout<<m.size()<<endl;
    	for(auto &i:m)
    		cout<<i.first<<"  "<<i.second<<endl;
    }
   int main()
   { 
   	    // maps are stored in sorted arrangement
       map<int,string>m;
       m[1]="abc";
       m[5]="cde";
       m[3]="acd";
       m[5]="acd";
       m.insert({4,"afg"});
       map<int,string> :: iterator it;
       for(it=m.begin();it!=m.end();++it)
       {
       	cout<<(*it).first<<"  "<<(*it).second<<endl;
       }
       // or 
       for(auto &pr:m)
       	cout<<pr.first<<"  "<<pr.second<<endl;
       // by using the function
       m.erase(3);
       print(m);
      auto i=m.find(7);
      // m.find() which find the elements in the map;
      if(i==m.end())
      {
      	cout<<"NO VALUE"<<endl;
      }
      
      else
      {
      	 cout<<i->first<<" "<<i->second<<endl;
      }
      //m.erase() which erases the elements
      map<int,string>p;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    string s;
    cin>>s;
    p[x]=s;
  }
  for(auto &i:p)
    cout<<i.first<<"  "<<i.second<<endl;
   }