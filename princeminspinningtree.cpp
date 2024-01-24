#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][5]={{-1,3,-1,-1,7},
	             {3,-1,5,6,8,-1},
	             {-1,5,-1,6,-1,4},
	             {-1,-1,6,-1,4,-1},
	             {-1,4,-1,4,-1,2},
	             {7,-1,4,-1,2,-1}
	         };
	 for(int i=0;i<5;i++)
	 {
	 	for(int j=0;j<5;j++)
	 	{
	 		cout<<a[i][j];
	 	}
	 	cout<<endl;
	 }
}