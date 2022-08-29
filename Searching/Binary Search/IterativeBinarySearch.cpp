#include <iostream>
using namespace std;
int binary_search(int arr[100],int num,int x)
{
  int low=0;
  int high=num-1;
   
   while(low<=high)
   {
       int mid=(low+high)/2;
       if(arr[mid]==x)
       {
           return mid;
           
       }
       else if(x>arr[mid])
       {
           low=mid+1;
       }
       else if(x<arr[mid])
       {
           high=mid-1;
       }
   } 
   return -1;
}
int main()
{
   int arr[100],x,n;
   cout<<"Enter size of Array: "<<endl;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   cout<<"Enter element to be searched"<<endl;
   cin>>x;
   int num=sizeof (arr) / sizeof (arr[0]);  
   int found=binary_search(arr,num,x);
   if(found!=-1)
   {
       cout<<"Element found at index : "<<found+1<<endl;
   }
   else{
        cout<<"Number not found"<<endl;
   }
  
   return 0;
   }
