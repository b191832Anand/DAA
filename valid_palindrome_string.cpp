#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   bool isvalid(char d)
   {
       if((d>='a' &&d<='z') || (d>='A'&& d<='Z')||(d>='0' && d<='9'))
       return true;
       return false;
   }
    char lowercase(char ch)
    {
        if((ch>='a'&& ch<='z')||(ch>='0'&&ch<='9'))
        return ch;
        return ch-'A'+'a';
    }
    bool isPalindrome(string s) {
        string t="";
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(isvalid(s[i]))
             t.push_back(s[i]);
        }
        for(int i=0;i<t.length();i++){
            t[i]=lowercase(t[i]);
        }
        int d=0;
        int e=t.length()-1;
        while(d<=e)
        {
            if(t[d]!=t[e])
            return false;
            d++;
            e--;
        }
        return true;
    }
};
int main()
{
	string s;
	cin>>s;
	cout<<Solution().isPalindrome(s);
}