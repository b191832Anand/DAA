#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
	int val;
	Node* next;
      Node(int data)
      {
          val=data;
          next=NULL;
      }
      Node()
      {
      	val=0;
      	next=NULL;
      }
};
  Node* head=new Node();
   void create(int val)
   {  Node*temp=head;
   while(temp->next!=NULL)
   	 {
   	 	temp=temp->next;
   	 }
   	   temp->next=new Node(val);
   }
   // rotate linked list for k position 
 Node* rotate(Node*head,int k){
         if(head==NULL || k==0)
         	return head;
         Node*temp=head;
         int count=1;
         while(temp->next!=NULL)
         {
         	count++;
         	temp=temp->next;
         }
         temp->next=head;
         k=k%count;
         k=count-k;
         while(k--){
         	temp=temp->next;
         }
         head=temp->next;
         temp->next=NULL;
         return head;
     }
       Node*swapair(Node*ptr)
       {
       	if(ptr==NULL)
       			return ptr;
       	   Node*temp=ptr->next;
       	   ptr->next=swapair(temp->next);
       	   temp->next=ptr;

       	   return temp;
       }
int main()
{
	create(45);
	create(56);
	create(67);
	create(23);
	create(54);
	head=head->next;
	Node*temp=head;
	Node*ptr=head;
	while(temp)
	{
		cout<<temp->val<<endl;
		temp=temp->next;
	}
	cout<<endl; 
	  ptr=swapair(ptr);
	head=rotate(head,2);
	  
   while(ptr)
	{
		cout<<ptr->val<<endl;
		ptr=ptr->next;
	}
	cout<<endl;
	while(head)
	{
		cout<<head->val<<endl;
		head=head->next;
	}
}