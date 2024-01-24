#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  class node{
  public:
  	  int val;
      node*right;
      node*left;
      node(int x)
      {
      	val=x;
      	right=NULL;
      	left=NULL;
      }
  };
int main()
{
   node*root=new node(10);
     node*temp=new node(20);
     root->right=temp;
   cout<<root->right;
}