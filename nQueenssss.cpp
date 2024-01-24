#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool issafe(vector<vector<string>>board,int row,int col)
{
	int n=row,c=col;
	while(row>=0)
	{
		if(board[row][col]=='Q')
			return false;
		row--;
	}
	row=n,col=c;
	while(row>=0 && col>=0){
		if(board[row][col]=='Q')
			return false;
		row--,col--;
	}
	row=n,col=c;
	while(row<n && col>=0){
		if(board[row][col]=='Q')
			return false;
		row++;
		col--;
	}
	return true;
}
void solve(vector<vector<string>>&ans,vector<vector<string>>&board,int col,int n)
{
	if(col==n){
		ans.push_back(board);
		return;
	}
	for(int row=0;row<n;row++)
	{
		if(issafe(board,row,col))
		{
			board[row][col]='Q';
			solve(ans,board,col+1,n);
			board[row][col]='-';
		}
	}
}
 vector<vector<string>> nqueens(int n){
 	vector<vector<string>>ans;
 	vector<string>board(n);
 	string s(n,'.');
 	for(int i=0;i<n;i++)
 	{
 		board[i]=s;
 	}
 	solve(ans,board,0,n);
 	return ans;
 }
int main()
{
	int n;
	cin>>n;
	vector<vector<string>>ans=nqueens(n);
	// solve(ans,board,0,n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
}