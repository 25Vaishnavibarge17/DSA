#include<iostream>
using namespace std;
int main()
{
    int arr[100], i,n,num, index;
    cout<<"Enter Array size: ";
    cin>>n;
    cout<<"Enter Array Elements : "<<endl;
    for(i=0; i<n; i++)
        cin>>arr[i];
    cout<<"\nEnter a Number to Search: ";
    cin>>num;
    for(i=0; i<n; i++)
    {
        if(arr[i]==num)
        {
            index = i;
            cout<<"\nFound at Index No."<<index;
            break;
        }
    }
    if(index==0)
        {
            cout<<"Element not found"<<endl;
        }
    cout<<endl;
    return 0;
}
