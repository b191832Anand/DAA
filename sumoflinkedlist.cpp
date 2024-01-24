#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node*next;
	node(int val){
		data=val;
		next=NULL;
	}
};
node*head=NULL;
     node*head1=NULL;
node*create(node*root,int data)
   {
   	 node*temp=new node(data);
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
   	 	ptr->next=temp;
   	 }
   	 return root;
   }
   int add()
   {
   	int sum=0;
   	node*ptr=head;
   	node*temp=head1;
   		while(ptr!=NULL)
   		{
   			int first=ptr->data;
   			sum=sum*10+first;
   			ptr=ptr->next;
   		}
   		 int reverse=0;
   		while(sum!=0)
   		{
   			int l=sum%10;
   			reverse=reverse*10+l;
   			sum=sum/10;
   		}
   	 int value=0;
   		while(temp!=NULL)
   		{
   			int second=temp->data;
   			value=value*10+second;
   			temp=temp->next;
   		}
   		int reverse1=0;
   		while(value)
   		{
   			int r=value%10;
   			reverse1=reverse1*10+r;
   			value=value/10;
   		}
   	  int total=reverse+reverse1;
   	  return total;
   }
   void display(node*root)
   {
   	node*temp=root;
   	while(temp!=NULL)
   	{
   		cout<<temp->data<<" ";
   		temp=temp->next;
   	}
   	cout<<endl;
   }
int main()
{
	int n,c;
	cin>>n>>c;
	for(int i=0;i<n;i++)
	{
		int data;
		cin>>data;
		head=create(head,data);
	}
      for(int i=0;i<c;i++)
      {
      	int value;
      	cin>>value;
      head1=create(head1,value);
      }
      cout<<add()<<endl;
}