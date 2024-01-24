#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class TreeNode
{
  public:
  	int val;
  	TreeNode*left;
  	TreeNode*right;
  	TreeNode(int data)
  	{
  		val=data;
  		right=NULL;
  		left=NULL;
  	}
  	TreeNode()
  	{
  		val=0;
  		right=NULL;
  		left=NULL;
  	}
  };
TreeNode* createtree(TreeNode*root,TreeNode*temp)
  {
  	if(root==NULL)
      return temp;
    if(temp->val>=root->val)
      root->right=createtree(root->right,temp);
    else {
      root->left=createtree(root->left,temp);
    }
    return root;
  }
void inorder(TreeNode*head)
  {
  	if(head==NULL)
  		return;
  	inorder(head->left);
  	cout<<head->val<<endl;
  	inorder(head->right);
  }
  int depth(TreeNode*root)
  {
    if(root==NULL)
      return 0;
    int l=depth(root->left);
    int r=depth(root->right);
    return 1+max(l,r);
  }
  bool search(TreeNode*root,int val)
  {
    if(root==NULL)
      return false;
    else if(root->val==val)
      return true;
    else if(val>root->val)
      return search(root->right,val);
    else
      return search(root->left,val);
  }
int main()
{      
	TreeNode*root;
  int n;cin>>n;
  for(int i=0;i<n;i++)
  {
       int y;cin>>y;
      TreeNode*temp=new TreeNode(y);
        if(i==0)
          root=temp;
        else{
    root=createtree(root,temp);
   }
  }
	inorder(root);
  cout<<depth(root)<<endl;
  int val;cin>>val;
  if(search(root,val))
    cout<<"found";
  else
    cout<<"not found";
}