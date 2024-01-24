#include<bits/stdc++.h>
using namespace std;
bool checkequals(int a[],int b[]){
    for(int i=0;i<26;i++){
        if(a[i]!=b[i])return 0;
    }
    return 1;
}
  bool isvalid(string s1,string s2){
      int check1[26]={0};
     for(int i=0;i<s1.length();i++){
        int index=s1[i]-'a';
        check1[index]++;
    }       
     // for window1
    int check2[26]={0};
    int i=0,windowsize=s1.length();
    while(i<windowsize && i<s2.length()){
        int index=s2[i]-'a';
        check2[index]++;
    }
    if(checkequals(check2,check1))return 1;
    // for remaining window
    while(i<s2.length()){
        char newc=s2[i];
        int newi=newc-'a';
        check2[newi]++;
        char oldc=s2[i-windowsize];
        int oldi=oldc-'a';
        check2[oldi]--;
        if(checkequals(check2,check1))return 1;
    }
    return 0;
  }
int main(){
    string s1,s2;
    cin>>s1>>s2;  
     cout<<isvalid(s1,s2);
}