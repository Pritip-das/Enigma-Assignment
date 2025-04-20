#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    for (int row = 1; row <= n; row++) {
        for (int num = 1; num <= n; num++) {
            for (int count = 1; count <= row; count++) {
                cout << num;
            }
        }
        cout << endl;
    }

    return 0;
}
