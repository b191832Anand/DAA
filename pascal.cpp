#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    vector<vector<int>> generate(int numRows) {
        int n=numRows;
        vector<vector<int>>ans(n);
        for(int i=0;i<n;i++)
        {
            ans[i].resize(i+1);
            ans[i][0]=ans[i][i]=1;
            for(int j=1;j<i;j++)
                ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
        }
        return ans;
    }
int main()
{
    int k;
    cin>>k;
    vector<vector<int>>ans=generate(k);
    int n=ans.size();
    for(int i=0;i<n;i++)
    {
        int m=ans[i].size();
        for(int j=0;j<m;j++)
        {
           cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}