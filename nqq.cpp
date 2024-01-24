#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
bool issafe(vector<string>&board,int col,int row,int n)
{
  int dcol=col;
  int drow=row;
  while(row>=0)
  {
    if(board[row][col]=='Q')
      return false;
    row--;
  }
  col=dcol;
  row=drow;
    while(row>=0 && col>=0)
      {
        if(board[row][col]=='Q')
          return false;
        row--;
        col--;
      }
      col=dcol;
  row=drow;
     while(col<n && row>=0)
     {
      if(board[row][col]=='Q')
        return false;
      col++;
      row--;
     }
     return true;
}
public:
void solve(vector<vector<string>>&ans,vector<string> &board,int row,int n)
{
  if(row==n)
  {
    ans.push_back(board);
    return ;
  }
   for(int col=0;col<n;col++)
   {
    if(issafe(board,col,row,n))
    {
      board[row][col]='Q';
      solve(ans,board,row+1,n);
      board[row][col]='.';
    }
   }
}
    public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        solve(ans,board,0,n);
        return ans;
    }
};
int main(){
  int n;cin>>n;
  Solution obj;
  vector<vector<string>>ans=obj.solveNQueens(n);
  for(int i=0;i<ans.size();i++)
  {
    cout<<"arrangement for "<<i+1<<endl;
    for(int j=0;j<ans[0].size();j++)
    {
      cout<<ans[i][j];
      cout<<endl;
      // endl is because we are adding it in col format
    }
    cout<<endl;
  }
}