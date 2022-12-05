#include <iostream>
using namespace std;
int main()
{
    int i,j,n,key, arr[30];
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"\nEnter the elements\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<=n-1;i++)
    {
       key=arr[i];
       j=i-1;
       while((key<arr[j])&&(j>=0))
         {
            arr[j+1]=arr[j];
            j=j-1;
         }
     arr[j+1]=key;
    }
    cout<<"Array after insertion sort: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
