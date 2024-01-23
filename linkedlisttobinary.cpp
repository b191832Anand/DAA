#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node*next;
	node(){
		data=0;
		next=NULL;
	}
	node(int val)
	{
		data=val;
		next=NULL;
	}
};
node*head=new node();
   void create(int data)
   {
   	 node*temp=new node(data);
   	 if(head==NULL)
   	 {
   	 	head=temp;
   	 }
   	 else
   	 {
   	 	node*ptr=head;
   	 	while(ptr->next!=NULL)
   	 	{
   	 		ptr=ptr->next;
   	 	}
   	 	ptr->next=temp;
   	 }
   }
   void display()
   {
   	node*temp=head;
   	while(temp!=NULL)
   	{
   		cout<<temp->data<<" ";
   		temp=temp->next;
   	}
   	cout<<endl;
   }
   int tobinary()
   {
   	node*temp=head;
   	 int result=temp->data;
   	 while(temp->next)
   	 {
   	 	result=(result*2)+temp->next->data;
   	 	temp=temp->next;
   	 }
   	 return result;
   }
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int data;
		cin>>data;
		create(data);
	}
	display();
     cout<<tobinary();
}
class linked
{
public:
	#include <bits/stdc++.h>
using namespace std;
struct node
{nhjbjjm,
   int val;
  node* next;
  node(){
   this->val=0;
   next=NULL;
  }
  node(int val){
   this->val=val;
   next=NULL;
  }
};
 node* head=new node();
  void create(int data){
     node*temp=new node(data);
     node*ptr=head;
     while(ptr->next!=NULL){
      ptr=ptr->next;
     }
     ptr->next=temp;
 }
 node* reverse(){
   node*temp=NULL;
   while(head){
      node*ptr=head->next;
      head->next=temp;
      temp=head;
      head=ptr;
   }
   return temp;
 }
int main(){
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
      int data;
      cin>>data;
     create(data);
   }
   head=head->next;
   node *ans=reverse();
   while(ans!=NULL){
      cout<<ans->val<<";
      ans=ans->next;
   }
}
};