#include <bits/stdc++.h>
using namespace std;
struct frame{
  int val;
  int ts;
};
int hit_check(struct frame page[],int key,int n){
  for(int i=0;i<n;i++){
    if(key==page[i].val)return i;
  }
  return -1;
}
int find_fifo_idx(struct frame page[],int n){
  int mn=INT_MAX;
  int idx=0;
  for(int i=0;i<n;i++){
    if(page[i].ts<mn){
      mn=page[i].ts;
      idx=i;
    }
  }
  return idx;
}
int find_last_occur(int arr[],int key,int curr,int n)
{

  for(int i=curr;i<n;i++)
  {
    if(arr[i]==key)
    {
      return i;
    }
  }
  return -1;
}
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  int f;
  cin>>f;
  struct frame page[f];
  
  int curr=0,time=0;
  while(curr!=f)
  {
    page[curr].val=arr[curr];
    page[curr].ts=time;
    time++;
    curr++;
  }
  
  
  int faults=f,hits=0;
  while(curr<n)
  {
     int idx=hit_check(page,arr[curr],f);
     if(idx!=-1)
     {
       page[idx].ts=time;
       time++;
       hits++;
     }
     
     else
     {
        int last_occur=-1;
        for(int i=0;i<f;i++)
        {
          int idx=find_last_occur(arr,page[i].val,curr+1,n);
          if(idx==-1)
          {
            page[i].val=arr[curr];
            page[i].ts=time++;
            last_occur=0;
            break;
          }
          last_occur=max(last_occur,idx);
        }
        
        if(last_occur==-1)
        {
          int idx=find_fifo_idx(page,f);
          page[idx].val=arr[curr];
          page[idx].ts=time;
          time++;
        }
        
        else if(last_occur!=0)
        {
          for(int i=0;i<f;i++)
          {
             if(page[i].val==arr[last_occur])
             {
                page[i].val=arr[curr];
                page[i].val=time++;
                break;
             }
          }
        } 
       
        faults++;
     }
     curr++;
  }
  
  cout<<"No.of page faults: "<<faults<<endl<<"No.of hits: "<<hits<<endl;
  int i=0;
  while(i<f)
    cout<<page[i++].val<<endl;
}