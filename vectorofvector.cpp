
 #include<iostream>
 #include<bits/stdc++.h>
 using namespace std;
 void printvec(vector<int>v)
    {
    	 for(int i=0;i<v.size();i++)
    	 	 // v.size->0(1)
    	 	cout<<v[i]<<"  ";
        }
   int main()
   {
     vector<vector<int> >v;
     int N;
     cin>>N;
     for(int i=0;i<N;i++)
     {
     	vector<int>temp;
     	int n;
     	cin>>n;
     	for(int j=0;j<n;j++)
     	{
            int x;
            cin>>x;
            temp.push_back(x);
     	}
     	v.push_back(temp);
     }
      for(int i=0;i<N;i++)
      {
      	printvec(v[i]);
      	cout<<endl;
      }
   }