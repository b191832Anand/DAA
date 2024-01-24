#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class TreeNode{
public:
	int val;
	TreeNode* next;
      TreeNode(int data)
      {
          val=data;
          next=NULL;
      }
      TreeNode()
      {
      	val=0;
      	next=NULL;
      }
};
  TreeNode* head=new TreeNode();
   void createtree(int val)
   {  TreeNode*temp=head;
   while(temp->next!=NULL)
   	 {
   	 	temp=temp->next;
   	 }
   	   temp->next=new TreeNode(val);
   }
int main()
{
	createtree(45);
	createtree(56);
	createtree(67);
	createtree(23);
	createtree(34);
	createtree(56);
	createtree(98);
	createtree(40);
	createtree(9);
	head=head->next;
	while(head)
	{
		cout<<head->val<<endl;
		head=head->next;
	}
}