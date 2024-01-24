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
void solve(vector<vector<vector<int>>>&ans,vector<vector<int>> &board,int row,int n)
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
	 		board[row][col]=1;
	 		solve(ans,board,row+1,n);
	 		board[row][col]=0;
	 	}
	 }
}
vector<vector<vector<int>>> nQ(int n)
{
	vector<vector<vector<int>>>ans;
	vector<vector<int>>board(n,vector<int>(n,0));
	solve(ans,board,0,n);
	return ans;
}
int main()
{
	int n;cin>>n;
	vector<vector<vector<int>>>ans=nQ(n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
			cout<<ans[i][j][k]<<" ";
		}
		cout<<endl;
		}
		cout<<endl;
	}
}