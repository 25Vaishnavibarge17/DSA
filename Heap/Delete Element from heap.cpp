// Max heap
#include <iostream>
using namespace std;
class heap{
    public:
    int arr[100];
    int size;
    heap(){
        arr[0]=-1;
        size=0;
    }
    
    void insert(int val)
    {
        size=size+1;
        int index=size;
        arr[index]=val;
        while(index>1)
        {
            int parent=index/2;
            if(arr[parent]<arr[index])
            {
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else
            {
                return;
            }
        }
    }
    
    void print(){
        cout<<"The heap formed is : "<<endl;
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
    
    void deletenode()
    {
        if(size==0)
        {
            cout<<"No node to delete"<<endl;
            return;
        }
        arr[1]=arr[size];
        size--;
        int i=1;
        while(i<size){
            int leftIndex=2*i+1;
            int rightIndex=2*i+2;
            if(leftIndex<size && arr[i]<arr[leftIndex])
            {
                swap(arr[i],arr[leftIndex]);
                i=leftIndex;
            }
            else if(rightIndex<size && arr[i]<arr[rightIndex])
            {
                swap(arr[i],arr[rightIndex]);
                i=rightIndex;
            }
            else
            {
                return;
            }
        }
        
    }
};
int main()
{
    heap h;
    int n;
    cout<<"Enter total no of nodes: ";
    cin>>n;
    int x;
    cout<<"Enter nodes: ";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        h.insert(x);
    }
    h.print();
    h.deletenode();
    h.print();
}
