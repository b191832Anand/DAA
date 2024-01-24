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
   void nodepair(TreeNode* head)
     {
     	 TreeNode*ptr=new TreeNode();
     	 cout<<ptr->val<<endl;
     	 TreeNode*temp=ptr;
     	 stack<TreeNode*>st;
     	 while(head!=NULL)
     	 {
     	 	st.push(head);
     	 	st.push(head->next);
     	 	for(int i=0;i<2;i++)
     	 	{
     	 		ptr->next=st.top();
     	 		st.pop();
     	 		cout<<ptr->val<<endl;
     	 		ptr=ptr->next;
     	 	}
     	 	head=head->next->next;
     	 }
     }
int main()
{
	createtree(45);
	createtree(56);
	createtree(67);
	createtree(23);
	head=head->next;
	nodepair(head);
	cout<<endl;
	while(head!=NULL)
	{
		cout<<head->val<<endl;
		head=head->next;
	}
}