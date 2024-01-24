#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> pair_sum(vector<int>&v,int sum)
{
	  vector<vector<int>> ans;
	  unordered_map<int,int>umap;
	for(auto &i:v){
       int count=umap[sum-i];
       vector<int>pair;
       pair.push_back(i);
       pair.push_back(sum-i);
       while(count--)
       {
       	ans.push_back(pair);
       }
       umap[i]+=1;
	}
	for(int i=0;i<ans.size();i++)
	{
		vector<int>temp=ans[i];
		sort(temp.begin(),temp.end());
		ans[i]=temp;
	}
	sort(ans.begin(),ans.end());
	return ans;
}
int main()
{
	int n,sum;
	cin>>n>>sum;
	vector<int>v(n);
	for(auto &i:v)
		cin>>i;
	vector<vector<int>>ans=pair_sum(v,sum);
	for(int i=0;i<ans.size();i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
}