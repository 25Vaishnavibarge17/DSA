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
};
int main()
{
    heap h;
    int n;
    cout<<"Enter total no of nodes: ";
    cin>>n;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        h.insert(x);
    }
    h.print();
}
