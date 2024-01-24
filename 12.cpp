#include<bits/stdc++.h>
using namespace std;
struct node
{ 
	 int data;
	 struct node*next;
	 node(int val)
	 {
	 	data=val;
	 	next=NULL;
	 }
};
 node*head=NULL;
 node*head1=NULL;
  node*create(node*root,int data)
  {   node*temp=new node(data);
  	if(root==NULL)
  	{
       root=temp;
  	}
  	else
  	{  node*ptr=root;
  		while(ptr->next!=NULL)
  		{
  			ptr=ptr->next;
  		}
  		ptr->next=temp;
  	}
    return root;
  }
    void display(node*ans)
    {
    	node*ptr=ans;
    	while(ptr!=NULL)
    		 {
    		 	cout<<ptr->data<<" ";
    		 	ptr=ptr->next;
    		 }
    }
     node*addsum(node*head,node*headl)
    {
        node*ans=new node(0);
        node*p=head;
        node*q=headl;
        node*carr=ans;
        int carry=0;
        while(p!=NULL || q!=NULL)
        {
           int x=(p!=NULL)?p->data:0;
           int y=(q!=NULL)?q->data:0;
           int sum=carry+x+y;
           carry=sum/10;
           carr->next=new node(sum%10);
           carr=carr->next;
           p=p->next;
           q=q->next;
        }
        if(carry>0)
        {
            carr->next=new node(carry);
        }
        return ans->next;
    }
int main()
{ 
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	int num;
    	cin>>num;
    	head=create(head,num);
    }
    for(int i=0;i<m;i++)
    {
        int nums;
        cin>>nums;
        head1=create(head1,nums);
    }
       node*ans=addsum(head,head1);
       display(head);
}