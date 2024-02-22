#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string s="";
        int flag=0;
        if(a-b<3){
          flag=1;
            while(a>0&& b>0){
               s+="ab";
               a--;
               b--;
            }
            if(a>0){
                s+='a';
                a--;
            }
            if(b>0){
                s+='b';
                b--;
            }
        }
      else{
        if(a>b){
          s+="aab";
          a-=2;
          b--;
        }
        else{
          s+="bba";
          a--;
          b-=2;
        }
      }
       if(flag)return s;
        return s+strWithout3a3b(a,b);
    }
};

int main(){
    int a,b;
    cin>>a>>b;
    cout<<Solution().strWithout3a3b(a,b);
}