#include <iostream>
using namespace std;

int removeDuplicates(int original[], int n, int unique[]) {
    int newSize = 0;

    for (int i = 0; i < n; ++i) {
        bool isDuplicate = false;

        // Check if original[i] already exists in unique[]
        for (int j = 0; j < newSize; ++j) {
            if (original[i] == unique[j]) {
                isDuplicate = true;
                break;
            }
        }

        // If not duplicate, add to unique[]
        if (!isDuplicate) {
            unique[newSize] = original[i];
            newSize++;
        }
    }

    return newSize;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;
    
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << "Original array: ";
    printArray(arr,n);
    int unique[n];
    int newSize = removeDuplicates(arr, n, unique);
    cout << "Array with distinct elements: ";
    printArray(unique, newSize);

    return 0;
}
