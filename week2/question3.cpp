#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int original[n], copy[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> original[i];
    }

    for (int i = 0; i < n; i++) {
        copy[i] = original[i];
    }

    cout << "Copied array elements:\n";
    for (int i = 0; i < n; i++) {
        cout << copy[i] << " ";
    }
    cout << endl;

    return 0;
}
