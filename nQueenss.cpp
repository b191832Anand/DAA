#include<bits/stdc++.h>
using namespace std;
bool issafe(vector<vector<int>>&board,int col,int row,int n)
{
	int dcol=col;
	int drow=row;
	while(row>=0)
	{
		if(board[row][col]==1)
			return false;
		row--;
	}
	col=dcol;
	row=drow;
    while(row>=0 && col>=0)
    	{
    		if(board[row][col]==1)
    			return false;
    		row--;
    		col--;
    	}
    	col=dcol;
	row=drow;
	   while(col<n && row>=0)
	   {
	   	if(board[row][col]==1)
	   		return false;
	   	col++;
	   	row--;
	   }
	   return true;
}
void solve(vector<vector<int>> &board,int row,int n)
{
	if(row==n)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<board[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return ;
	}
	 for(int col=0;col<n;col++)
	 {
	 	if(issafe(board,col,row,n))
	 	{
	 		board[row][col]=1;
	 		solve(board,row+1,n);
	 		board[row][col]=0;
	 	}
	 }
}
void nQ(int n)
{
	vector<vector<int>> board(n,vector<int>(n,0));
	solve(board,0,n);
}
int main()
{
	int n;cin>>n;
	nQ(n);
}