#include <iostream>
using namespace std;
int ternary_search(int arr[],int l,int r,int x)
{
    if(l<=r)
    {
        int mid1=l+(r-l)/3;
        int mid2=r-(r-l)/3;
        if(arr[mid1]==x)
        {
            return mid1;
        }
        if(arr[mid2]==x)
        {
            return mid2;
        }
        if(x<arr[mid1])
        {
            return ternary_search(arr,l,mid1-1,x);
        }
        else if(x>arr[mid2])
        {
            return ternary_search(arr,mid2+1,r,x);
        }
        else
        {
            return ternary_search(arr,mid1+1,mid2-1,x);
        }
     }
     return -1;
}
int main() {
    
    int l,r,n,x,ans;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter element to be searched: ";
    cin>>x;
    ans=ternary_search(arr,0,n-1,x);
    if(ans==-1)
    {
        cout<<"Element not found"<<endl;
    }
    else
    {
        cout<<"Element found at index : "<<ans<<endl;
    }
    return 0;
}
