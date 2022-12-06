#include <bits/stdc++.h> 
using namespace std;  
void swap(int arr[],int ele1, int ele2)  // swapping the elements
{  
    int t = arr[ele1];  
    arr[ele1] = arr[ele2];  
    arr[ele2] = t;  
}  
int partition (int arr[], int beg, int end)   // partitioning the elements
{  
    int pivot = arr[end]; 
    int i = (beg - 1); 
  
    for (int j = beg; j <= end - 1; j++)  
    {  
      
        if (arr[j] < pivot)  
        {  
            i++; 
            swap(arr[i], arr[j]);  
        }  
    }  
    swap(arr[i + 1], arr[end]);  
    return (i + 1);  
}  
void quickSort(int arr[], int beg, int end)  
{  
    if (beg < end)  
    {  
        
        int pIndex = partition(arr, beg, end);  
  
        quickSort(arr, beg, pIndex - 1);  
        quickSort(arr, pIndex + 1, end);  
    }  
}  
void display(int arr[], int n)   
{  
  
    for (int i = 0; i < n; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
int main()  
{  
    int n,i;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout << "Elements of array before sorting: \n";  
    display(arr, n);
    quickSort(arr, 0, n - 1);  
    cout << "Elements of array after sorting: \n";  
    display(arr, n);  
    return 0;  
}  
