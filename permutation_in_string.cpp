#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isvalid(int check[],int arr[])
{
	for(int i=0;i<26;i++)
	{
		if(arr[i]!=check[i])
			return 0;
	}
	return 1;
}
bool solve(string &s,string &s2)
{
	int arr[26]={0};
	for(int i=0;i<s.length();i++)
	{
		int index=s[i]-'a';
		arr[index]++;
	}
	int check[26]={0};
	int i=0;
	int windowsize=s.length();
	while(i<windowsize && i<s2.length()){
		int index=s2[i]-'a';
		check[index]++;
		i++;
	}
	if(isvalid(check,arr))
		return 1;
	while(i<s2.length())
         {
            int index=s2[i]-'a';
            check[index]++;  
            index=s2[i-windowsize]-'a';
            check[index]--;
              i++;
            if(isvalid(check,arr))
            return true;   
        }
	return 0;
}
int main()
{
	string s,t;
	cin>>s,t;
    cout<<solve(s,t);
}