#include<iostream>
using namespace std;
void bubbleSort(int arr[])
{
    int i, j,n, temp;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<(n-i-1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int i, arr[n];
    cout<<"Enter array Elements: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i]; 
    }
    bubbleSort(arr);
    cout<<"\nThe New Sorted Array is: \n";
    for(i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
