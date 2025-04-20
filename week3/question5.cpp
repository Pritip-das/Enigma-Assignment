#include <iostream>
#include <unordered_set>
using namespace std;

void removeDuplicates(int arr[], int n, int newArr[], int& newSize) {
    unordered_set<int> seen;
    newSize = 0;
    
    for (int i = 0; i < n; i++) {
        if (seen.find(arr[i]) == seen.end()) {
            newArr[newSize++] = arr[i];
            seen.insert(arr[i]);
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int newArr[n], newSize;
    removeDuplicates(arr, n, newArr, newSize);
    printArray(newArr, newSize);

    return 0;
}
