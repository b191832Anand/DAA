#include<bits/stdc++.h>
#include<queue>
using namespace std;

struct process{
    int at,bt,temp_bt,ct,tat,wt,vis;
};

bool comp(process p1,process p2)
{
     return (p1.at < p2.at);
}

int main()
{
   int n;
   cout<<"Enter no.of processes: ";
   cin>>n;
   
   struct process p[n];
   
   cout<<"Enter the at & bt:"<<endl;
   for(int i=0;i<n;i++)
   {
      cin>>p[i].at>>p[i].bt;
      p[i].temp_bt=p[i].bt;
      p[i].ct=0;
      p[i].tat=0;
      p[i].wt=0;
      p[i].vis=0;
   }
   
   cout<<"Enter quantum time: ";
   int qt;cin>>qt;
   
   sort(p,p+n,comp);

   queue<int> rq;
   rq.push(0);
  
   int sum=p[0].at;
   while(!rq.empty())
   {
   
     int i=rq.front();
     rq.pop();
     
     if(p[i].bt<=qt)
     {
       sum+=p[i].temp_bt;
       p[i].temp_bt=0;
       
       p[i].ct=sum;
       p[i].tat=p[i].ct-p[i].at;
       p[i].wt=p[i].tat-p[i].bt;
       p[i].vis=1;
     }
     
     else
     {
       p[i].temp_bt-=qt;
       sum+=qt;
       p[i].vis=1;
     }
     
     int j=0;
     while(j<n && p[j].at<=sum)
     {
       if(p[j].vis==0)
       {
         rq.push(j);
         p[j].vis=1;
       }
       j++;
     }
     
     if(p[i].temp_bt!=0)
       rq.push(i);
       
   }
   
   cout<<"AT\tBT\tCT\tTAT\tWT"<<endl;
   for(int i=0;i<n;i++)
      printf("%d\t%d\t%d\t%d\t%d\n",p[i].at,p[i].bt,p[i].ct,p[i].tat,p[i].wt);
   
} 
     