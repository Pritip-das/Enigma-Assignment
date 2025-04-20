#include <iostream>
using namespace std;
void reverse(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void rotateRight(int arr[], int n, int k) {
    k = k % n; 
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n,k;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << "Original array: ";
    printArray(arr, n);
    cout << "Enter number of positions to rotate: ";
    cin >> k;
    rotateRight(arr, n, k);
    cout << "Array after rotating right by " << k << " positions: ";
    printArray(arr, n);
    return 0;
}
