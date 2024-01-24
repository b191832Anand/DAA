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
    	cout<<endl;
    }

    void swap(int *a,int *b)
    {
    	int temp=*a;
    	*a=*b;
    	*b=temp;
    }
    node*partition(node*start,node*last)
    {
    	int pivot=start->data;
    	node*p=start;
    	node*q=start->next;
    	while(q!=last)
    	{
    		if(q->data<pivot)
    		{
    			p=p->next;
    			swap(&p->data,&q->data);
    		}
    		q=q->next;
    	}
    	swap(&p->data,&start->data);
    	return p;
    }
    void quicksort(node*start,node*last)
    {
    	 if(start!=last)
    	 {
    	 	node*pi=partition(start,last);
    	 	quicksort(start,pi);
    	 	quicksort(pi->next,last);
    	 }
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
	node*ptr=head;
	quicksort(ptr,NULL);
	display();
}