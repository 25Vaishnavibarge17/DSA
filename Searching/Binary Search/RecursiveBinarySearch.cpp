#include <iostream>
using namespace std;
int binarySearch(int arr[], int low, int high, int target)
{
    // Base condition (search space is exhausted)
    if (low > high) {
        return -1;
    }
 
    // find the mid-value in the search space and
    // compares it with the target
 
    int mid = (low + high)/2;    // overflow can happen
    // int mid = low + (high - low)/2;
 
    // Base condition (target value is found)
    if (target == arr[mid]) {
        return mid;
    }
 
    // discard all elements in the right search space,
    // including the middle element
    else if (target < arr[mid]) {
        return binarySearch(arr, low, mid - 1, target);
    }
 
    // discard all elements in the left search space,
    // including the middle element
    else {
        return binarySearch(arr, mid + 1, high, target);
    }
}
 
int main(void)
{
   int arr[100],target,n;
   cout<<"Enter size of Array: "<<endl;
   cin>>n;
   cout<<"Enter array elements"<<endl;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   cout<<"Enter element to be searched"<<endl;
   cin>>target;
   int num=sizeof (arr) / sizeof (arr[0]); 
 
    int low = 0, high = n - 1;
    int index = binarySearch(arr, low, high, target);
 
    if (index != -1) {
        printf("Element found at index %d", index);
    }
    else {
        printf("Element not found in the array");
    }
 
    return 0;
}
