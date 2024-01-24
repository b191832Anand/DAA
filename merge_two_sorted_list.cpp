#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
	int val;
	Node*next;
	Node(int data){
		val=data;
		next=NULL;
	}
	Node ()
	{
		val=0;
		next=NULL;
	}
};
   Node* head1=new Node();
   Node* head2=new Node();
   Node* create(Node* head,int data)
   {
      Node*temp=head;
      while(temp->next!=NULL)
      	temp=temp->next;
      Node*ptr=new Node(data);
      temp->next=ptr;
      return head;
   }
  Node* merge(Node*a,Node*b)
  {
  	if(a==NULL)return b;
  	if(b==NULL)return a;
  	if(a->val>b->val)
  	swap(a,b);
  	Node*res=a;
  	while(a!=NULL && b!=NULL)
  	{
  		Node*temp=NULL;
  		while(a!=NULL && a->val<=b->val)
  		{
  			temp=a;
  			a=a->next;
  		}
  		temp->next=b;
  		swap(a,b);
  	}
  	return res;
  }
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		 int x;
		 cin>>x;
		head1=create(head1,x);
	}
	for(int i=0;i<m;i++)
	{
		int y;
		cin>>y;
		head2=create(head2,y);
	}
	head1=head1->next;
	head2=head2->next;
   Node* temp=merge(head1,head2);
   while(temp)
   {
   	cout<<temp->val<<endl;
   	temp=temp->next;
   }
}