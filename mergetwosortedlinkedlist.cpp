#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node
{
	 int data;
	 node*next;
	 node(int val)
	 {
	 	data=val;
	 	next=NULL;
	 }
};
node*create(node*root,int val)
{
	node*temp=new node(val);
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		node*ptr=root;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=root;
	}
	return root;
}
 void display(node*head1)
 {
 	node*temp=head1;
 	while(temp!=NULL)
 	{
 		cout<<temp->data<<"->";
 		temp=temp->next;
 	}
 	cout<<endl;
 }
int main()
{
	  node*head1=NULL;
	  node*head2=NULL;
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		int val;
		cin>>val;
		head1=create(head1,val);
	}
	for(int i=0;i<m;i++)
	{
		int v;
		cin>>v;
		head2=create(head2,v);
	}
	display(head1);
}