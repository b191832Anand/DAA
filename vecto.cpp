#include <bits/stdc++.h>
using namespace std;
struct node
{
   int data;
   node*left;
   node*right;
   node(){
      this->data=0;
      left=NULL;
      right=NULL;
   }
   node(int val){
      this->data=val;
      left=NULL;
      right=NULL;
   }
};
node*create(int val,node*head){
   node*temp=new node(val);
   node*ptr=head;
   while(ptr->right!=NULL){
      ptr=ptr->right;
   }
   temp->left=ptr;
   ptr->right=temp;
   return head;
}
 node*reverse(node*head){
   node*temp=head,*ptr=head->right;
   head->right=NULL;
   head->left=ptr;
   while(ptr!=NULL){
      ptr->left=ptr->right;
      ptr->right=temp;
      temp=ptr;
      ptr=ptr->left;
   }
   return temp;
   /*  new way to solve the reverse of the double linked list
       node*temp=NULL;
       while(head!=NULL){
         head->left=head->right;
         head->right=temp;
         temp=head;
         head=head->left;
       }
   */
 }
int main(){
     node *head=new node();
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
       int val;
       cin>>val;
       head=create(val,head);
     }
     head=head->right;
     head->left=NULL;
     node*temp=reverse(head);
     while(temp!=NULL){
      cout<<temp->data<<" ";
      temp=temp->right;
     }
}