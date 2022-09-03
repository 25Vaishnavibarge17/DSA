#include <iostream>
using namespace std;

int main() {
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int numbers[size];
    cout << "Enter  numbers: " << endl;

//  store input from user to array
    
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }
    cout << "The numbers are: ";
    
//  print array elements

    for (int i= 0; i< size; ++i) {
        cout << numbers[i] << "  ";
    }

    return 0;
}
