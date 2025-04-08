/*3. Write a C++ program to find the largest digit in a number.*/

#include <iostream>
using namespace std;

int main() {
    long long number;
    int largestDigit = 0;
    
    
    cout << "Enter a number: ";
    cin >> number;
    
    if (number < 0) {
        number = -number;
    }
    
    if (number == 0) {
        largestDigit = 0;
    } else {
        while (number > 0) {
            int digit = number % 10;
            
            if (digit > largestDigit) {
                largestDigit = digit;
            }
            if (largestDigit == 9) {
                break;
            }
            
            number /= 10;
        }
    }
    
    cout << "The largest digit is: " << largestDigit << endl;
    
    return 0;
}