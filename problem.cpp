   #include<iostream>
   #include<bits/stdc++.h>
   using namespace std;
   int main()
   {
   	  map<int,multiset<string>>m;
   	  int n;
   	  cin>>n;
   	  for(int i=0;i<n;i++)
   	  	{  string name;
   	  		cin>>name;
            int marks;
            cin>>marks;
            m[-1*marks].insert(name);
   	  	}
   	  	for(auto &i:m){
            auto &student=i.second;
            auto marks=i.first;
            for(auto &j:student)
            	cout<<j<<" "<<(-1*marks)<<endl;
   	  	}
   	 
   }