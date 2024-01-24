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
node*head=NULL;
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
    }
    void reverse()
    {
    	node*temp,*ptr;
    	temp=NULL;
    	while(head!=NULL)
    	{
    		ptr=head->next;
    		head->next=temp;
    		temp=head;
    		head=ptr;
    	}
    	head=temp;
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
	cout<<endl;
	reverse();
	display();
}