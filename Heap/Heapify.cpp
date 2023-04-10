#include <iostream>
using namespace std;
void heapify(int arr[],int n,int i)
{
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    
    if(left<n && arr[largest]<arr[left])
    {
        largest=left;
    }
    if(right<n && arr[largest]<arr[right])
    {
        largest=right;
    }
    
    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}
int main()
{
    int n;
    cout<<"Enter total no of nodes: ";
    cin>>n;
    cout<<"Enter nodes: ";
    int* arr = new int[n + 1];
    arr[0]=-1;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Before heapify: "<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    for(int i=n/2;i>0;i--)
    {
        heapify(arr,n,i);
    }
    cout<<"After heapify: "<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}
