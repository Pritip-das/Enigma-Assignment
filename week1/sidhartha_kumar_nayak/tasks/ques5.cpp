/*Write a C++ program to check if a Number is Perfect square using loops.*/

#include <iostream>
using namespace std;

int main() {
    int number;
    bool isPerfectSquare = false;
    
    cout << "Enter a number to check if it's a perfect square: ";
    cin >> number;
    
    if (number < 0) {
        cout << number << " is not a perfect square (negative numbers cannot be perfect squares)" << endl;
        return 0;
    }
    
    if (number == 0 || number == 1) {
        cout << number << " is a perfect square" << endl;
        return 0;
    }
    
    for (int i = 1; i * i <= number; i++) {
        if (i * i == number) {
            isPerfectSquare = true;
            cout << number << " is a perfect square (square of " << i << ")" << endl;
            break;
        }
    }
    
    if (!isPerfectSquare) {
        cout << number << " is not a perfect square" << endl;
    }
    
    return 0;
}