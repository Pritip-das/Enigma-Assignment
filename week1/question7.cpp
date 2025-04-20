#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int count = 1;

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n; col++) {
            cout << count;
            if (col != n) {
                cout << "*";
            }
            count++;
        }
        cout << endl;
    }

    return 0;
}
