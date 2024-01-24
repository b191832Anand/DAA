#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeDuplicateLetters(string s) {
       unordered_map<char,int>umap;
       for(int i=0;i<s.length();i++)
       umap[s[i]]++;
       for(auto &i:umap)
       cout<<i.first<<" "<<i.second<<endl;
       return s;
    }
};
int main()
{
	string s;
	cin>>s;
	string t=Solution().removeDuplicateLetters(s);
	cout<<t;
}