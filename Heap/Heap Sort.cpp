#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right <= n && arr[right] > arr[largest])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void HeapSort(int arr[], int n)
{
    int size = n;
    for (int i = n / 2; i >= 1; i--)
    {
        heapify(arr, n, i);
    }
    while (size > 1)
    {
        swap(arr[size], arr[1]);
        size--;
        heapify(arr, size, 1);
    }
}

int main()
{
    int n;
    cout << "Enter total no of nodes: ";
    cin >> n;
    cout << "Enter nodes: ";
    int* arr = new int[n + 1];
    arr[0] = -1;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    cout << "Before heap sort: " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    HeapSort(arr, n);
    cout << "After Heap Sort: " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
