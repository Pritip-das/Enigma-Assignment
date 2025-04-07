#include <iostream>

using namespace std;

int main() {
    int number;
    bool isPerfectSquare = false;

    cout << "Enter a number: ";
    cin >> number;

    if (number < 0) {
        cout << "Negative numbers cannot be perfect squares." << endl;
        return 1;
    }

    for (int i = 0; i * i <= number; i++) {
        if (i * i == number) {
            isPerfectSquare = true;
            break;
        }
    }

    if (isPerfectSquare) {
        cout << number << " is a Perfect Square." << endl;
    } else {
        cout << number << " is NOT a Perfect Square." << endl;
    }

    return 0;
}
