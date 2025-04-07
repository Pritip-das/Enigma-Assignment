#include <iostream>
using namespace std;

void decimalToBinary(int decimal) {
    int binary[32];
    int index = 0;

    if (decimal == 0) {
        cout << "Binary: 0" << endl;
        return;
    }

    while (decimal > 0) {
        binary[index++] = decimal % 2;
        decimal /= 2;
    }

    cout << "Binary: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << binary[i];
    }
    cout << endl;
}

void decimalToOctal(int decimal) {
    int octal[32];
    int index = 0;

    if (decimal == 0) {
        cout << "Octal: 0" << endl;
        return;
    }

    while (decimal > 0) {
        octal[index++] = decimal % 8;
        decimal /= 8;
    }

    cout << "Octal: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << octal[i];
    }
    cout << endl;
}

int main() {
    int number;

    cout << "Enter a decimal number: ";
    cin >> number;

    if (number < 0) {
        cout << "Please enter a non-negative number." << endl;
        return 1;
    }

    decimalToBinary(number);
    decimalToOctal(number);

    return 0;
}
