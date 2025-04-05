/*Write a C++ program to input a decimal number and convert it into binary and
octal number system using loops*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    int originalDecimal = decimal;
    bool isNegative = false;
    if (decimal < 0) {
        isNegative = true;
        decimal = -decimal;
        cout << "Converting the absolute value: " << decimal << endl;
    }
    cout << "Decimal: ";
    if (isNegative) cout << "-";
    cout << decimal << endl;
    
    cout << "Binary: ";
    if (isNegative) cout << "-";
    
    if (decimal == 0) {
        cout << "0";
    } else {
        int binaryDigits = 0;
        int tempForCount = decimal;
        while (tempForCount > 0) {
            binaryDigits++;
            tempForCount /= 2;
        }
        for (int i = binaryDigits - 1; i >= 0; i--) {
            int posValue = 1;
            for (int j = 0; j < i; j++) {
                posValue *= 2;
            }
            
            if (decimal >= posValue) {
                cout << "1";
                decimal -= posValue;
            } else {
                cout << "0";
            }
        }
    }
    cout << endl;
    
    decimal = originalDecimal;
    if (decimal < 0) decimal = -decimal;
    
    cout << "Octal: ";
    if (isNegative) cout << "-";
    
    if (decimal == 0) {
        cout << "0";
    } else {
        int octalDigits = 0;
        int tempForCount = decimal;
        while (tempForCount > 0) {
            octalDigits++;
            tempForCount /= 8;
        }
        
        for (int i = octalDigits - 1; i >= 0; i--) {
            int posValue = 1;
            for (int j = 0; j < i; j++) {
                posValue *= 8;
            }
            
            int digit = decimal / posValue;
            cout << digit;
            decimal -= digit * posValue;
        }
    }
    cout << endl;
    
    return 0;
}