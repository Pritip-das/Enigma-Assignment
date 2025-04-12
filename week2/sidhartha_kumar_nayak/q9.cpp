#include <iostream>
using namespace std;
void Array(int arr[], int size, int index = 0) {
    if (index == size) {
        return; 
    }
    cout << arr[index] << " ";
    Array(arr, size, index + 1); 
}

int main() {
    int size;
   cout<<"Enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the array elements "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout << "Array elements: ";
    Array(arr, size);

    return 0;
}
