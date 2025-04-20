#include <iostream>
void printArray(int arr[], int size) ;
using namespace std;

void moveNegativesToLeft(int arr[], int size) {
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout << "Array after sorting: ";
    printArray(arr, size);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int size;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements for array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout << "Original array: ";
    printArray(arr, size);

    moveNegativesToLeft(arr, size);
    return 0;
}
