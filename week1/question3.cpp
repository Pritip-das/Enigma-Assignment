#include<iostream>
#include<cstdlib>

using namespace std;

int main() {
    int num, digit, largest = 0;

    cout << "Enter a number: ";
    cin >> num;

    num = abs(num);

    if (num == 0) {
        largest = 0;
    } else {
        while (num > 0) {
            digit = num % 10;
            if (digit > largest) {
                largest = digit;
            }
            num = num / 10;
        }
    }

    cout << "The largest digit is: " << largest << endl;

    return 0;
}
