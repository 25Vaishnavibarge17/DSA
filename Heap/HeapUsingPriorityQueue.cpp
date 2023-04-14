#include<bits/stdc++.h>
using namespace std;
void MaxHeap()
{
    int n;
    cout<<"Enter no. of nodes in Heap: ";
    cin>>n;
    int x;
    priority_queue<int>pq;
    cout<<"Enter elements of Heap: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        pq.push(x);
    }
    cout<<"Element at top: "<<pq.top()<<endl;
    cout<<"Heap Size: "<<pq.size()<<endl;
    
    // popping top element;
    pq.pop();
    cout<<"After pop operation"<<endl;
    cout<<"Element at top: "<<pq.top()<<endl;
    cout<<"Heap Size: "<<pq.size()<<endl;
    
    if(pq.empty())
    {
        cout<<"Heap is empty"<<endl;
    }
    else
    {
        cout<<"Heap is not empty"<<endl;
    }
}
void MinHeap()
{
    int n1;
    cout<<"Enter no. of nodes in Heap: ";
    cin>>n1;
    int x1;
    cout<<"Enter elements of Heap: "<<endl;
    priority_queue<int,vector<int>,greater<int>>minhp;
    for(int i=0;i<n1;i++)
    {
        cin>>x1;
        minhp.push(x1);
    }
    cout<<"Element at top: "<<minhp.top()<<endl;
    cout<<"Heap Size: "<<minhp.size()<<endl;
    
    // popping top element;
    minhp.pop();
    cout<<"After pop operation"<<endl;
    cout<<"Element at top: "<<minhp.top()<<endl;
    cout<<"Heap Size: "<<minhp.size()<<endl;
    
    if(minhp.empty())
    {
        cout<<"Heap is empty"<<endl;
    }
    else
    {
        cout<<"Heap is not empty"<<endl;
    }
}
int main()
{
   cout<<"Choice: "<<endl;
   cout<<"1. Max Heap"<<endl;
   cout<<"2. Min Heap"<<endl;
   cout<<"3. Both"<<endl;
   int ch;
   cin>>ch;
   switch(ch){
       case 1:
            MaxHeap();
            break;
       case 2:
            MinHeap();
            break;
       case 3:
            MaxHeap();
            MinHeap();
   }
   return 0;
}
